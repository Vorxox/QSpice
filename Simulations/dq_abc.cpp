// Automatically generated C++ file on Fri Jun 21 17:22:56 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD dq_abc.cpp kernel32.lib

#include <math.h>
#include <time.h>

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef d
#undef q
#undef theta
#undef a
#undef b
#undef c


extern "C" __declspec(dllexport) void dq_abc(struct sDQ_ABC **opaque, double t, union uData *data)
{
   double  d     = data[0].d; // input
   double  q     = data[1].d; // input
   double  theta = data[2].d; // input
   double &a     = data[3].d; // output
   double &b     = data[4].d; // output
   double &c     = data[5].d; // output


// Implement module evaluation code here:
//a = d*cos(theta) + q*sin(theta);
//b = (d*cos(theta - 2*M_PI/3)) + (q*sin(theta - 2*M_PI/3));
//c = (d*cos(theta + 2*M_PI/3)) + (q*sin(theta + 2*M_PI/3));
//}

   a = cos(theta)*d - sin(theta)*q;
   b = cos(theta-2.*M_PI/3.)*d - sin(theta-2.*M_PI/3.)*q;
   c = cos(theta-4.*M_PI/3.)*d - sin(theta-4.*M_PI/3.)*q;
}
