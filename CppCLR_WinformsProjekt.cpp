#include "pch.h"
#include "CppCLR_WinformsProjekt.h"
using namespace System;
Qint CreateQint() // Tao Qint la mang 4 voi 4 phan tu int = 0
{
	Qint a;
	for (int i = 0; i < 4; i++)
		a.bit[i] = 0;
	return a;
}
Qint ScanfQint(Qint& a)
{
	string s;
	cin >> s;
	a = DecToQint(s);
	return a;
}
void SetBit(int& i, int vt, int giatri)
{
	if (giatri == 1)
		i = (1 << vt) | i;
	else
		i = (0 << vt) | i;
	return;
}
int GetBit(int i, int j) // lay bit tai vi tri j cua i
{
	return (i >> j) & 1;
}
Qint NOT(Qint a)
{
	Qint b;
	for (int i = 0; i < 4; i++)
	{
		b.bit[i] = ~a.bit[i];
	}
	return b;
}
Qint Cong(Qint a, Qint b)
{
	Qint Tong = CreateQint();
	int flag = 0;
	for (int i = 0; i < 128; i++)
	{
		int A = GetBit(a.bit[i / 32], i % 32);
		int B = GetBit(b.bit[i / 32], i % 32);
		int bit = A ^ B;
		bit = bit ^ flag;
		SetBit(Tong.bit[i / 32], i % 32, bit);
		if (A == 1 && B == 1 && flag == 1 || A == 0 && B == 1 && flag == 1 || A == 1 && B == 0 && flag == 1 || A == 1 && B == 1 && flag == 0)
			flag = 1;
		else
			flag = 0;
	}
	return Tong;
}
Qint TwoComplement(Qint a)
{
	Qint b = NOT(a);
	Qint One = CreateQint();
	SetBit(One.bit[0], 0, 1);
	b = Cong(b, One);
	return b;
}
string StringDiv2(string str) // chia chuoi so cho 2
{
	string KQ = "";
	int flag = 0;
	for (int i = 0; i < str.size(); i++)
	{
		int temp = (str[i] - 48 + flag * 10);
		KQ += (temp / 2) + 48;
		flag = temp % 2;
	}
	for (int i = 0; i < KQ.size(); i++)
	{
		if (KQ[i] == '0')
			KQ.erase(KQ.begin());
		break;
	}
	return KQ;
}
Qint DecToQint(string s) // Chuyen chuoi so sang mang bit Qint
{
	Qint a = CreateQint();
	char temp = s[0];
	if (temp == '-')
	{
		s.erase(s.begin(), s.begin() + 1);
	}
	int pos = 0;
	while (s != "")
	{
		int bit = 0;
		bit = (s[s.length() - 1] - 48) % 2;
		SetBit(a.bit[pos / 32], pos % 32, bit);
		s = StringDiv2(s);
		pos++;
	}
	if (temp == '-')
		a = TwoComplement(a);
	return a;
}
void PrintQInt(Qint a) // Xuat day bit Qint
{
	for (int i = 127; i >= 0; i--)
	{
		cout << GetBit(a.bit[i / 32], i % 32);
		if (i % 4 == 0 && i != 0)
			cout << " ";
	}
	cout << endl;
}
Qint DichTrai(Qint a, int num) {
	Qint result = CreateQint();
	for (int i = 127; i >= num; i--) {
		int tmp_i = i - num;
		int tmp = GetBit(a.bit[tmp_i / 32], tmp_i % 32);
		SetBit(result.bit[i / 32], i % 32, tmp);
	}
	return result;
}
Qint DichPhai(Qint a, int num) {
	Qint result = CreateQint();
	for (int i = 127; i > 127 - num; i--) {
		int tmp = GetBit(a.bit[3], 31);
		SetBit(result.bit[i / 32], i % 32, tmp);
	}
	for (int i = 127 - num; i >= 0; i--) {
		int tmp_i = i + num;
		int tmp = GetBit(a.bit[tmp_i / 32], tmp_i % 32);
		SetBit(result.bit[i / 32], i % 32, tmp);
	}
	return result;
}
bool Bang_Bang(Qint a, Qint b) {
	for (int i = 0; i < 128; i++) {
		if (GetBit(a.bit[i / 32], i % 32) != GetBit(b.bit[i / 32], i % 32))
			return false;
	}
	return true;
}
bool BeHon(Qint a, Qint b) {
	bool signA = GetBit(a.bit[3], 31);
	bool signB = GetBit(b.bit[3], 31);
	if ((signA ^ signB) == 1) {
		if (signA)
			return true;
		else
			return false;
	}
	for (int i = 127; i >= 0; i--) {
		int tmp = GetBit(a.bit[i / 32], i % 32);
		int tmp2 = GetBit(b.bit[i / 32], i % 32);
		if (GetBit(a.bit[i / 32], i % 32) < GetBit(b.bit[i / 32], i % 32))
			return true;
		if (GetBit(a.bit[i / 32], i % 32) > GetBit(b.bit[i / 32], i % 32))
			return false;
	}
}
bool LonHon(Qint a, Qint b) {
	return !(BeHon(a, b) || Bang_Bang(a, b));
}
bool BeHonBang(Qint a, Qint b) {
	return !(LonHon(a, b));
}
bool LonHonBang(Qint a, Qint b) {
	return !(BeHon(a, b));
}
Qint Tru(Qint a, Qint b)
{
	Qint Hieu = CreateQint();
	Hieu = Cong(a, TwoComplement(b));
	return Hieu;
}
int findOneST(Qint a)
{
	for (int i = 127; i >= 0; i--)
		if (GetBit(a.bit[i / 32], i % 32) != 0)
			return i;
}
Qint Nhan(Qint a, Qint b)
{
	Qint Tich = CreateQint();
	for (int i = 0; i < 128; i++)
		if (GetBit(b.bit[i / 32], i % 32) == 1)
		{
			Qint temp = DichTrai(a, i);
			Tich = Cong(Tich, temp);
		}
	return Tich;
}
Qint AND(Qint a, Qint b)
{
	Qint c;
	for (int i = 0; i < 4; i++)
	{
		c.bit[i] = a.bit[i] & b.bit[i];
	}
	return c;
}
Qint XOR(Qint a, Qint b)
{
	Qint c;
	for (int i = 0; i < 4; i++)
	{
		c.bit[i] = a.bit[i] ^ b.bit[i];
	}
	return c;
}
Qint OR(Qint a, Qint b)
{
	Qint c;
	for (int i = 0; i < 4; i++)
	{
		c.bit[i] = a.bit[i] | b.bit[i];
	}
	return c;
}
//Rotate Right
Qint ROR(Qint a, int num) {
	Qint result = a;

	for (int i = 0; i < num; i++) {
		int carry = GetBit(result.bit[0], 0);
		result = DichPhai(result, 1);
		SetBit(result.bit[3], 31, carry);
	}
	return result;
}
//Rotate Left
Qint ROL(Qint a, int num) {
	Qint result = a;

	for (int i = 0; i < num; i++) {
		int carry = GetBit(result.bit[3], 31);
		result = DichTrai(result, 1);
		SetBit(result.bit[0], 0, carry);
	}
	return result;
}
Qint BinToQInt(string a)
{
	Qint b = CreateQint();
	int n = a.size() - 1;
	for (int i = 0; i <= n; i++)
		SetBit(b.bit[i / 32], i % 32, a[n - i] - 48);
	return b;
}
string add(string a, string b)// cong 2 so thap phan
{
	//chuan hoa do dai a va b.
	while (a.length() < b.length())
		a = '0' + a;
	while (b.length() < a.length())
		b = '0' + b;
	string res;
	int nho = 0;
	//thuc hien phep cong
	for (int i = a.length() - 1; i >= 0; i--)
	{
		int sum = a[i] - '0' + b[i] - '0' + nho;
		nho = sum / 10;
		sum = sum % 10;
		res = char(int(sum + '0')) + res;
	}
	if (nho > 0)
		res = '1' + res;
	return res;
}
string QIntToDec(Qint a)// chuyen QInt sang Dec
{
	string s = "0";
	//chuyen so am sang duong
	bool Am = 0;
	Qint tmp = a;
	if (GetBit(a.bit[3], 31) == 1)
	{
		tmp = TwoComplement(tmp);
		Am = 1;
	}
	s = s;
	// tinh so he dec bang cac s=s+(bit[i])*2^i
	string mu = "1";
	for (int i = 0; i < 128; i++)
	{
		int j = GetBit(tmp.bit[i / 32], i % 32);
		if (j == 1)
			s = add(s, mu);
		mu = add(mu, mu);
	}
	if (Am) s = "-" + s;
	return s;
}
int BinToDec(string a)
{
	int KQ = 0;
	for (int i = 0; i < 4; i++)
	{
		KQ += (a[3 - i] - 48) * pow(2, i);
	}
	return KQ;
}
string QIntToHex(Qint a)
{
	string Hex = "", temp = "";
	for (int i = 0; i < 128; i++)
	{
		char bit = GetBit(a.bit[i / 32], i % 32) + 48;
		temp += bit;
		if ((i + 1) % 4 == 0)
		{
			reverse(temp.begin(), temp.end());
			int Dec = BinToDec(temp);
			if (Dec < 10)
				Hex += char(Dec + 48);
			else
				Hex += char(Dec + 55);
			temp = "";
		}
	}
	reverse(Hex.begin(), Hex.end());
	return Hex;
}
string BinToHex(string a)
{
	string Hex, temp;
	reverse(a.begin(), a.end());
	int t = 4 - (a.size() % 4);
	while (t != 4 && t > 0)
	{
		a += '0';
		t--;
	}
	for (int i = 0; i < a.size(); i += 4)
	{
		temp = a.substr(i, 4);
		reverse(temp.begin(), temp.end());
		int Dec = BinToDec(temp);
		if (Dec < 10)
			Hex += char(Dec + 48);
		else
			Hex += char(Dec + 55);
	}
	reverse(Hex.begin(), Hex.end());
	return Hex;
}
string QIntToBin(Qint a)
{
	string s;
	for (int i = 0; i < 128; i++)
	{
		int t = GetBit(a.bit[i / 32], i % 32);
		if (t == 1)
		{
			s = '1' + s;
		}
		else
		{
			s = '0' + s;
		}
	}
	return s;
}
string DecToHex(string a)
{
	Qint bin = DecToQint(a);
	return QIntToHex(bin);
}
string Dec2Bin(int a) // Ham phu cho HexToBin
{
	string KQ = "0000";
	int p = 3;
	while (a > 0)
	{
		if (a % 2 == 1)
			KQ.replace(p, 1, "1");
		p--;
		a /= 2;
	}
	return KQ;
}
string HexToBin(string a)
{
	string KQ = "";
	for (int i = 0; i < a.size(); i++)
	{
		int temp;
		if (int(a[i]) > 64)
			temp = a[i] - 55;
		else
			temp = a[i] - 48;
		KQ += Dec2Bin(temp);
	}
	return KQ;
}
Qint Bang(Qint a)
{
	Qint b;
	for (int i = 0; i < 4; i++)
		b.bit[i] = a.bit[i];
	return b;
}//Qint a = Qint b
Qint Chia(Qint a, Qint b)
{
	Qint Thuong = CreateQint();
	Qint temp = CreateQint();
	if (Bang_Bang(b, temp))
		exit(0);
	int sign = 0;
	if (BeHon(a, temp))
	{
		sign++;
		a = TwoComplement(a);
	}
	if (BeHon(b, temp))
	{
		sign++;
		b = TwoComplement(b);
	}
	int vt = findOneST(a);
	while (vt >= 0)
	{
		int j = GetBit(a.bit[vt / 32], vt % 32);
		SetBit(temp.bit[0], 0, j);
		if (LonHonBang(temp, b))
		{
			SetBit(Thuong.bit[vt / 32], vt % 32, 1);
			temp = Tru(temp, b);
		}
		temp = DichTrai(temp, 1);
		vt--;
	}
	if (sign == 1)
		return TwoComplement(Thuong);
	return Thuong;
}

void Initiate(Qfloat& x) //khoi tao 
{
	x.sign = '0';
	x.exponent = "";
	x.fraction = "";
	x.exp = 0;
	x.isZero = false;
	x.isInf = false;
	x.isDeNor = false;
	x.isNaN = false;
}
void Split(string Source, string& Des1, string& Des2)
{
	for (size_t i = 0; i < Source.length(); i++)
	{
		if (Source[i] == '.')
		{
			Des1.insert(Des1.begin(), Source.begin(), Source.begin() + i);
			Des2.insert(Des2.begin(), Source.begin() + i + 1, Source.end());
			return;
		}
	}
}
string Div2(string N)
{
	int carry = 0;
	string result;
	int tmp;
	for (size_t i = 0; i < N.length(); i++)
	{
		tmp = carry * 10 + (N[i] - 48);
		//result.push_back((char)((tmp / 2) + 48));
		result = result + (char)((tmp / 2) + 48);
		carry = tmp % 2;
	}
	while (result[0] == '0' && result.length() > 1) result.erase(result.begin());
	return result;
}
string AddBinary(string b1, string b2)
{
	while (b1.length() < b2.length()) b1 = "0" + b1;
	while (b1.length() > b2.length()) b2 = "0" + b2;
	string result = "";
	int carry = 0;
	for (int i = b1.length() - 1; i >= 0; i--) {
		if (b1[i] - 48 + b2[i] - 48 + carry == 0) {
			result = "0" + result;
			carry = 0;
		}
		else if (b1[i] - 48 + b2[i] - 48 + carry == 1) {
			result = "1" + result;
			carry = 0;
		}
		else if (b1[i] - 48 + b2[i] - 48 + carry == 2) {
			result = "0" + result;
			carry = 1;
		}
		else {
			result = "1" + result;
			carry = 1;
		}
	}
	if (carry == 1 && result.length() < 128) result = "1" + result;
	while (result.length() % 4 != 0) result = "0" + result;
	return result;
}
string NumToStr(int N)
{
	string res;
	while (N != 0)
	{
		res = char(N % 10 + '0') + res;
		N = N / 10;
	}
	return res;
}
string ToOnesComplement(string B)
{
	string result;
	while (B.length() < 128) B = "0" + B;
	for (size_t i = 0; i < B.length(); i++)
		result += B[i] == '0' ? "1" : "0";
	return result;
}
string ToTwosComplement(string B)
{
	return AddBinary(ToOnesComplement(B), "1");
}
string DtoB(string N)
{
	string result;
	bool isNeg = false;
	if (N[0] == '-')
	{
		isNeg = true;
		N.erase(N.begin());
	}
	while (N.compare("0") != 0) {
		if ((N[N.length() - 1] - 48) % 2 != 0)
			result = "1" + result;
		else
			result = "0" + result;
		N = Div2(N);
	}
	if (result.empty())
		result += "0";
	if (isNeg)
		return ToTwosComplement(result);
	else
		return result;
}
string Mul2(string a)
{
	string ans;
	int carry = 0;
	int i = a.length() - 1;
	int tmp;
	while (i >= 0)
	{
		tmp = ((a[i] - '0') * 2 + carry);
		ans = (char)(tmp % 10 + '0') + ans;
		carry = tmp / 10;
		i--;
	}
	if (carry > 0)
		ans = (char)(carry + '0') + ans;
	return ans;
}
string SubBinary(string b1, string b2)
{
	return AddBinary(b1, ToTwosComplement(b2));
}
string AddDecimal(string a, string b)
{
	string res;
	while (a.length() < b.length()) a = "0" + a;
	while (b.length() < a.length()) b = "0" + b;
	int carry = 0;
	for (int i = a.length() - 1; i >= 0; i--)
	{
		int tmp = a[i] - 48 + b[i] - 48 + carry;
		carry = tmp / 10;
		tmp = tmp % 10;
		res = (char)(tmp + 48) + res;
	}
	if (carry > 0) res = "1" + res;
	while (res[0] == '0' && res.length() > 1) res.erase(res.begin());
	return res;
}
string _2PowN(int N)
{
	string result("1");
	for (int i = 0; i < N; i++)
		result = Mul2(result);
	return result;
}
string BtoD(string B)
{
	string result;
	bool isNeg = false;
	if (B.length() == 128 && B[0] == '1')
	{
		isNeg = true;
		B = SubBinary(B, "1");
		B = ToOnesComplement(B);
	}
	result = "0";
	for (size_t i = 0; i < B.length(); i++) {
		if (B[i] == '1')
			result = AddDecimal(result, _2PowN(B.length() - i - 1));
	}
	if (isNeg)
		result = "-" + result;
	return result;
}
string MulN(string a, int n)
{
	string ans;
	int carry = 0;
	int i = a.length() - 1;
	int tmp;
	while (i >= 0)
	{
		tmp = ((a[i] - '0') * n + carry);
		ans = (char)(tmp % 10 + '0') + ans;
		carry = tmp / 10;
		i--;
	}
	if (carry > 0)
		ans = (char)(carry + '0') + ans;
	return ans;
}
int StrToNum(string str)
{
	int res = 0;
	for (int i = 0; i < str.length(); i++)
		res = res * 10 + str[i] - '0';
	return res;
}
void ScanQfloat(Qfloat& x)
{
	string str;
	cout << "Enter float: ";
	getline(cin, str);
	// xet dau nhap vao
	if (str[0] == '-')
	{
		x.sign = '1';
		str.erase(str.begin());
	}

	// tao hai string luu phan nguyen va phan thap phan
	string D, F;
	bool havePoint = false; // kiem tra so co dau
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '.')
		{
			havePoint = true;
			break;
		}
	// neu co thi tach phan nguyen va phan thap phan
	if (havePoint)
	{
		Split(str, D, F);
	}
	else // neu la so nguyen thi them phan thap phan vao bang 0
	{
		D = str;
		F = "0";
	}

	// kiem tra la so 0
	if (D.compare("0") == 0 && F.compare("0") == 0)
	{
		x.isZero = true;
		x.exp = -16383;
		for (int i = 0; i < 15; i++)
			x.exponent = x.exponent + "0";
		for (int i = 0; i < 112; i++)
			x.fraction = x.fraction + "0";
		return;
	}

	// tao phan fraction
	// them phan nguyen v� o fraction
	x.fraction = DtoB(D) + x.fraction;
	while (x.fraction[0] == '0')
	{
		x.fraction.erase(x.fraction.begin());
	}
	string temp;
	//them phan thap phan v� o fraction
	while (F.compare("0") != 0 && x.fraction.length() < 113)
	{
		temp = Mul2(F);
		if (F.length() == temp.length())
			x.fraction += "0";
		else
		{
			x.fraction += "1";
			temp.erase(temp.begin());
		}
		while (temp[temp.length() - 1] == '0' && temp.length() > 1) temp.pop_back();
		F = temp;
	}

	// them khong vao cuoi neu không du 113 ky tu
	while (x.fraction.length() < 113)
		x.fraction = x.fraction + "0";

	// Xoa di bit "1" dau tien va lay so mu
	if (D.compare("0") != 0)
	{
		x.fraction.erase(x.fraction.begin());
		x.exp = DtoB(D).length() - 1;
	}
	else
	{
		x.exp = -1;
		while (x.fraction[0] == '0')
		{
			x.fraction.erase(x.fraction.begin());
			x.exp--;
		}
		x.fraction.erase(x.fraction.begin());
		for (int i = 0; i < -x.exp - 1; i++)
		{
			temp = Mul2(F);
			if (F.length() == temp.length())
				x.fraction += "0";
			else
			{
				x.fraction += "1";
				temp.erase(temp.begin());
			}
			while (temp[temp.length() - 1] == '0' && temp.length() > 1) temp.pop_back();
			F = temp;
		}
	}

	//xay dung phan mu
	x.exponent = DtoB(NumToStr(x.exp + 16383));
	while (x.exponent.length() < 15)
		x.exponent = "0" + x.exponent;

	//Kiem tra so dac biet
	bool fractionIsZero = true;
	for (int i = 0; i < x.fraction.length(); i++)
		if (x.fraction[i] == '1')
		{
			fractionIsZero = false;
			break;
		}
	if (x.exp >= 16384 && fractionIsZero) x.isInf = true;
	if (x.exp >= 16384 && !fractionIsZero) x.isNaN = true;
	if (x.exp <= -16383 && !fractionIsZero) x.isDeNor = true;

	//thay doi phan mu neu vuot qua gioi han
	if (x.exp >= 16384) x.exponent = "111111111111111";
	if (x.exp <= -16383) x.exponent = "000000000000000";
}
string PrintQfloat(Qfloat x)
{
	string s = "";
	// xet cac truong hop dac biet
	if (x.isZero)
	{
		//cout << "0";
		s = '0';
		return s;
	}
	if (x.isInf && x.sign == '0')
	{
		//cout << "+ Inf";
		s = "+ Inf";
		return s;
	}
	if (x.isInf && x.sign == '1')
	{
		//cout << "- Inf";
		s = "- Inf";
		return s;
	}
	if (x.isDeNor)
	{
		//cout << " - So dang khong chuan (Denormalized)";
		s = " - So dang khong chuan (Denormalized)";
		return s;
	}
	if (x.isNaN)
	{
		//cout << " - NaN (Not A Number)";
		s = " - NaN (Not A Number)";
		return s;
	}

	// duyet phan nguyen va phan thap phan dua vao phan fraction
	string D, F;
	x.fraction = "1" + x.fraction;
	if (x.exp < 0)
	{
		D = "0";
		for (int i = 0; i < -x.exp - 1; i++)
			x.fraction = "0" + x.fraction;
		F = x.fraction;
	}
	else
	{
		D = x.fraction.substr(0, x.exp + 1);
		x.fraction.erase(0, x.exp + 1);
		F = x.fraction;
	}

	//chuyen phan nguyen nhi phan thanh phan thap phan
	D = BtoD(D);

	//kiem tra phan thap phan bang 0
	bool FIsZero = true;
	for (int i = 0; i < F.length(); i++)
		if (F[i] == '1')
		{
			FIsZero = false;
			break;
		}

	//chuyen phan thap phan nhi phan thanh thap phan
	string res("0"), temp("1");
	if (!FIsZero)
	{
		for (int i = 0; i < F.length(); i++)
		{
			res = res + "0";
			temp = MulN(temp, 5);
			if (F[i] == '1') res = AddDecimal(res, temp);
		}
	}
	while (res[res.length() - 1] == '0') res.pop_back();
	//xuat ket qua
	if (x.sign == '1') cout << "-";
	//cout << D << "." << res;
//	strcat(s,D);
//	strcpy(s,".");
//	strcpy(s,res);
	s = D + "." + res;
	return s;

}
Qfloat Qf_BinToDec(const string& str)
{
	//Thêm 0 v� o trước nếu chưa đủ 128 bit
	string temp = str;
	while (temp.length() < 128) temp = "0" + temp;

	//Tách 3 phần của Qfloat
	Qfloat res;
	Initiate(res);
	if (temp[0] == '0') res.sign = '0';
	else res.sign = '1';
	res.exponent = temp.substr(1, 15);
	res.fraction = temp.substr(16, 112);
	res.exp = StrToNum(BtoD(res.exponent)) - 16383;
	//kiem tra so dac biet
	bool fractionIsZero = true;
	for (int i = 0; i < res.fraction.length(); i++)
		if (res.fraction[i] == '1')
		{
			fractionIsZero = false;
			break;
		}
	if (res.exp == -16383 && fractionIsZero) res.isZero = true;
	if (res.exp >= 16384 && fractionIsZero) res.isInf = true;
	if (res.exp >= 16384 && !fractionIsZero) res.isNaN = true;
	if (res.exp <= -16383 && !fractionIsZero) res.isDeNor = true;

	//thay doi phan mu neu vot qua gioi han
	if (res.exp >= 16384) res.exponent = "111111111111111";
	if (res.exp <= -16383) res.exponent = "000000000000000";
	return res;
}
string Qf_DecToBin(const Qfloat& Qf)
{
	string res;
	if (Qf.sign == '0') res = "0" + res;
	else res = "1" + res;
	res = res + Qf.exponent + Qf.fraction;
	return res;
}
Qfloat DecToQfloat(string str)
{
	//	string str;
	//	cout << "Enter float: ";
	//	getline(cin, str);
	Qfloat x;
	Initiate(x);
	// xet dau nhap vao
	if (str[0] == '-')
	{
		x.sign = '1';
		str.erase(str.begin());
	}

	// tao hai string luu phan nguyen va phan thap phan
	string D, F;
	bool havePoint = false; // kiem tra so co dau
	for (int i = 0; i < str.length(); i++)
		if (str[i] == '.')
		{
			havePoint = true;
			break;
		}
	// neu co thi tach phan nguyen va phan thap phan
	if (havePoint)
	{
		Split(str, D, F);
	}
	else // neu la so nguyen thi them phan thap phan vao bang 0
	{
		D = str;
		F = "0";
	}

	// kiem tra la so 0
	if (D.compare("0") == 0 && F.compare("0") == 0)
	{
		x.isZero = true;
		x.exp = -16383;
		for (int i = 0; i < 15; i++)
			x.exponent = x.exponent + "0";
		for (int i = 0; i < 112; i++)
			x.fraction = x.fraction + "0";
		exit;
	}

	// tao phan fraction
	// them phan nguyen v� o fraction
	x.fraction = DtoB(D) + x.fraction;
	while (x.fraction[0] == '0')
	{
		x.fraction.erase(x.fraction.begin());
	}
	string temp;
	//them phan thap phan v� o fraction
	while (F.compare("0") != 0 && x.fraction.length() < 113)
	{
		temp = Mul2(F);
		if (F.length() == temp.length())
			x.fraction += "0";
		else
		{
			x.fraction += "1";
			temp.erase(temp.begin());
		}
		while (temp[temp.length() - 1] == '0' && temp.length() > 1) temp.pop_back();
		F = temp;
	}

	// them khong vao cuoi neu không du 113 ky tu
	while (x.fraction.length() < 113)
		x.fraction = x.fraction + "0";

	// Xoa di bit "1" dau tien va lay so mu
	if (D.compare("0") != 0)
	{
		x.fraction.erase(x.fraction.begin());
		x.exp = DtoB(D).length() - 1;
	}
	else
	{
		x.exp = -1;
		while (x.fraction[0] == '0')
		{
			x.fraction.erase(x.fraction.begin());
			x.exp--;
		}
		x.fraction.erase(x.fraction.begin());
		for (int i = 0; i < -x.exp - 1; i++)
		{
			temp = Mul2(F);
			if (F.length() == temp.length())
				x.fraction += "0";
			else
			{
				x.fraction += "1";
				temp.erase(temp.begin());
			}
			while (temp[temp.length() - 1] == '0' && temp.length() > 1) temp.pop_back();
			F = temp;
		}
	}

	//xay dung phan mu
	x.exponent = DtoB(NumToStr(x.exp + 16383));
	while (x.exponent.length() < 15)
		x.exponent = "0" + x.exponent;

	//Kiem tra so dac biet
	bool fractionIsZero = true;
	for (int i = 0; i < x.fraction.length(); i++)
		if (x.fraction[i] == '1')
		{
			fractionIsZero = false;
			break;
		}
	if (x.exp >= 16384 && fractionIsZero) x.isInf = true;
	if (x.exp >= 16384 && !fractionIsZero) x.isNaN = true;
	if (x.exp <= -16383 && !fractionIsZero) x.isDeNor = true;

	//thay doi phan mu neu vuot qua gioi han
	if (x.exp >= 16384) x.exponent = "111111111111111";
	if (x.exp <= -16383) x.exponent = "000000000000000";

	return x;
}
