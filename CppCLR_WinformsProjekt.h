#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<algorithm>
using namespace std;
struct Qint
{
	int bit[4];
};
Qint CreateQint();
Qint ScanfQint(Qint& a);
void SetBit(int& i, int vt, int giatri);
int GetBit(int i, int j);
Qint NOT(Qint a);
Qint Cong(Qint a, Qint b);
Qint TwoComplement(Qint a);
string StringDiv2(string str);
Qint DecToQint(string s);
void PrintQInt(Qint a);
Qint DichTrai(Qint a, int num);
Qint DichPhai(Qint a, int num);
bool Bang_Bang(Qint a, Qint b);
bool BeHon(Qint a, Qint b);
bool LonHon(Qint a, Qint b);
bool BeHonBang(Qint a, Qint b);
bool LonHonBang(Qint a, Qint b);
Qint Tru(Qint a, Qint b);
int findOneST(Qint a);
Qint Nhan(Qint a, Qint b);
Qint AND(Qint a, Qint b);
Qint XOR(Qint a, Qint b);
Qint OR(Qint a, Qint b);
Qint ROR(Qint a, int num);
Qint ROL(Qint a, int num);
Qint BinToQInt(string a);
string add(string a, string b);
string QIntToDec(Qint a);
int BinToDec(string a);// ham sp QintToDec
string QIntToBin(Qint a);
string QIntToHex(Qint a);
string BinToHex(string a); // tu test
string DecToHex(string a);
string Dec2Bin(int a); // Ham phu cho HexToBin
string HexToBin(string a);
Qint Bang(Qint a);
Qint Chia(Qint a, Qint b);

struct Qfloat
{
	char sign;		 // phan dau
	string exponent; // phan so mu
	string fraction; // phan tri
	int exp;		 // so mu
	bool isZero;	 //kiem tra bang 0
	bool isInf;		 //kiem tra la so vo cung
	bool isDeNor;	 //kiem tra la so o dang khong chuan
	bool isNaN;		 //kiem tra so bao loi
};
void Initiate(Qfloat& x); //khoi tao 
void Split(string Source, string& Des1, string& Des2);
string Div2(string N);
string AddBinary(string b1, string b2);
string NumToStr(int N);
string ToOnesComplement(string B);
string ToTwosComplement(string B);
string DtoB(string N);
string Mul2(string a);
string SubBinary(string b1, string b2);
string AddDecimal(string a, string b);
string _2PowN(int N);
string BtoD(string B);
string MulN(string a, int n);
int StrToNum(string str);
void ScanQfloat(Qfloat& x);
string PrintQfloat(Qfloat x);
Qfloat Qf_BinToDec(const string& str);
string Qf_DecToBin(const Qfloat& Qf);
Qfloat DecToQfloat(string str);