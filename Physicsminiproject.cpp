#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void displaymenu();
void taketopic();
void takedata();
int main()
{
    displaymenu();
    taketopic();
    takedata();
    system("pause");
    return 0;
}
void displaymenu()
{
    cout<<setw(55)<<right<<"\033[31m"<<"THEORETICAL CALCULATION ASSISTANT"<<"\033[0m"<<endl;
    cout<<setw(55)<<right<<"\033[31m"<<"_________________________________"<<"\033[0m"<<endl<<endl<<endl<<endl;
    cout<<"\033[33m"<<"Select any module:"<<"\033[0m"<<endl<<endl<<endl;
    cout<<"\033[32m"<<"Press 'a' for Quantum Physics."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'b' for Crystallography."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'c' for Semiconductors."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'd' for Interference in thin film."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'e' for Superconductors and Supercapacitors."<<"\033[0m"<<endl<<endl<<endl<<endl;
}
void taketopic()
{   char type;
    cout<<"\033[33m"<<"Enter your choice: "<<"\033[0m"<<endl;
    cout<<"\033[33m";
    cin>>type;
    cout<<"\033[0m"<<endl<<endl;
 
switch (type)
 {  case'a':
    cout<<"\033[32m"<<"Press 'f' to calculate De-Broglie Wavelength."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'g' to calculate De-Broglie Wavelength (if potential difference given)."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'h' to calculate energy of electron/proton."<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'i' to calculate momentum of electron/proton."<<"\033[0m"<<endl<<endl<<endl<<endl;
    break;
  
    case'b':
    cout<<"\033[32m"<<"Press 'j' to calculate interplanar distance. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'k' to calculate wavelength of x-ray. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'l' to calculate glancing angle. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'm' to calculate order of reflection. "<<"\033[0m"<<endl<<endl<<endl<<endl;
    break;
  
    case'c':
    cout<<"\033[32m"<<"Press 'n' to calculate probability of electron. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'o' to calculate energy level of particle, "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'p' to calculate resistivity of p/n type semiconductor. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'q' to calculate Hall voltage. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'r' to calculate concentration of acceptor/donor atoms. "<<"\033[0m"<<endl<<endl<<endl<<endl;
    break;

    case 'd':
    cout<<"\033[32m"<<"Press 's' to calculate thickness of film in reflected ray. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 't' to calculate order of thickness. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'u' to calculate minimum thickness of light that will appear dark in the reflected light. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'v' to calculate minimum thickness of light that will appear bright in the reflected light. "<<"\033[0m"<<endl<<endl<<endl<<endl;
    break;

    case 'e':
    cout<<"\033[32m"<<"Press 'w' to calculate critical temperature of the element. "<<"\033[0m"<<endl<<endl;
    cout<<"\033[32m"<<"Press 'x' to calculate critical magnetic field. "<<"\033[0m"<<endl<<endl<<endl<<endl;
    break;

    default:
    cout<<"\033[32m"<<"You entered invalid type! "<<"\033[0m"<<endl;
 }
}
void takedata()
{   char value;
    cout<<"\033[33m"<<"Enter your choice: "<<"\033[0m"<<endl;
    cout<<"\033[33m";
    cin>>value;
    cout<<"\033[0m"<<endl<<endl;
 
switch (value)
 {  case 'f':
    {
    long double pc,mfe,sl,wl; 
    cout<<"\033[32m"<<"\n Enter plank's constant (J.s): "<<"\033[0m";
    cin>>pc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter mass of electron or proton (kg): "<<"\033[0m";
    cin>>mfe;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter speed of light (m/s): "<<"\033[0m";
    cin>>sl;
    cout<<endl<<endl;
    wl=pc/(mfe*sl);
    cout<<"\033[31m"<<"\n The De-Broglie wavelength is = "<<"\033[0m"<< wl <<" meters "<<endl;
    break;
    }
  
    case 'g':
    {
    long double pc,mfp,en,wl; 
    cout<<"\033[32m"<<"\n Enter plank's constant (J.s): "<<"\033[0m";
    cin>>pc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter mass of the particle (kg): "<<"\033[0m";
    cin>>mfp;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the energy of the particle (J): "<<"\033[0m";
    cin>>en;
    cout<<endl<<endl;
    wl=pc/sqrt(2*mfp*en);
    cout<<"\033[31m"<<"\n The De-Broglie wavelength is = "<<"\033[0m"<< wl <<" meters "<<endl;
    break;
    }
   
    case 'h':
    {
    long double pc,mfp,en,wl; 
    cout<<"\033[32m"<<"\n Enter plank's constant (J.s): "<<"\033[0m";
    cin>>pc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter mass of the particle (kg): "<<"\033[0m";
    cin>>mfp;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the wavelength of the particle (m): "<<"\033[0m";
    cin>>wl;
    cout<<endl<<endl;
    en=(pc*pc)/(2*mfp*wl*wl);
    cout<<"\033[31m"<<"\n The Energy of the particle is = "<<"\033[0m"<< en <<" Joules "<<endl;
    break;
    }
  
    case 'i':
    {
    long double pc,mom,wl; 
    cout<<"\033[32m"<<"\n Enter plank's constant (J.s): "<<"\033[0m";
    cin>>pc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the wavelength of the particle (m): "<<"\033[0m";
    cin>>wl;
    cout<<endl<<endl;
    mom=pc/wl;
    cout<<"\033[31m"<<"\n The Momentum of the particle is = "<<"\033[0m"<< mom <<" Kg-m/sec "<<endl;
    break;
    }
   
    case 'j':
    {
    long double lc,hm,km,lm,id; 
    cout<<"\033[32m"<<"\n Enter lattice constant (Angstrom): "<<"\033[0m";
    cin>>lc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter 'h' miller indice: "<<"\033[0m";
    cin>>hm;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter 'k' miller indice: "<<"\033[0m";
    cin>>km;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter 'l' miller indice: "<<"\033[0m";
    cin>>lm;
    cout<<endl<<endl;
    id=lc/sqrt((hm*hm)+(km*km)+(lm*lm));
    cout<<"\033[31m"<<"\n The Interplanar distance is = "<<"\033[0m"<< id <<" Angstrom "<<endl;
    break;
    } 
    case 'k':
    {
    long double id,on,an,wl; 
    cout<<"\033[32m"<<"\n Enter interplanar distance (angstrom): "<<"\033[0m";
    cin>>id;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the order of reflection: "<<"\033[0m";
    cin>>on;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the glancing angle (degrees): "<<"\033[0m";
    cin>>an;
    cout<<endl<<endl;
    long double sine= sin(an*3.14/180);
    wl=(2*id*sine/on);
    cout<<"\033[31m"<<"\n The Wavelength is = "<<"\033[0m"<< wl <<" Angstrom "<<endl;
    break;
    } 

    case 'l':
    {
    long double id,on,wl,gl,an; 
    cout<<"\033[32m"<<"\n Enter interplanar distance (Angstrom): "<<"\033[0m";
    cin>>id;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the order of reflection: "<<"\033[0m";
    cin>>on;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the wavelength (Angstrom): "<<"\033[0m";
    cin>>wl;
    cout<<endl<<endl;
    gl = asin((on*wl)/(2*id));
    an = gl*180/3.14;
    cout<<"\033[31m"<<"\n The glancing angle is= "<<"\033[0m"<< an <<" degrees "<<endl;
    break;
    } 

    case 'm':
    {
    long double id,on,wl,an; 
    cout<<"\033[32m"<<"\n Enter interplanar distance (Angstrom): "<<"\033[0m";
    cin>>id;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the glancing angle (degrees): "<<"\033[0m";
    cin>>an;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the wavelength (Angstrom): "<<"\033[0m";
    cin>>wl;
    cout<<endl<<endl;
    long double sine= sin(an*3.14/180);
    on = (2*id*sine/(wl));
    cout<<"\033[31m"<<"\n The order of reflection is= "<<"\033[0m"<< on <<endl;
    break;
    } 

    case 'n':
    {
    long double eol,kc,tm,pe ; 
    cout<<"\033[32m"<<"\n Enter the electron occupying energy level (J): "<<"\033[0m";
    cin>>eol;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the boltzmann constant (J/K): "<<"\033[0m";
    cin>>kc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the temperature (K): "<<"\033[0m";
    cin>>tm;
    cout<<endl<<endl;
    pe=(1/(1+(exp(eol/(kc*tm)))));
    cout<<"\033[31m"<<"\n The probability of electron = "<<"\033[0m"<< pe <<endl;  
    break;
    } 

    case 'o':
    {
    long double fe,kc,tm,pe,eol,el ; 
    cout<<"\033[32m"<<"\n Enter the fermi energy (J): "<<"\033[0m";
    cin>>fe;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the boltzmann constant (J/K): "<<"\033[0m";
    cin>>kc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the temperature (K): "<<"\033[0m";
    cin>>tm;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the probability of electron: "<<"\033[0m";
    cin>>eol;
    cout<<endl<<endl;
    el=fe+(kc*tm)*(log(1/eol-1));
    cout<<"\033[31m"<<"\n The energy level of particle is = "<<"\033[0m"<< el <<" Joules "<<endl;
    break;
    } 

    case 'p':
    {
    long double re,mo,hc ; 
    cout<<"\033[32m"<<"\n Enter the mobility (m^2/V-sec): "<<"\033[0m";
    cin>>mo;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the Hall coefficient (m^3/c): "<<"\033[0m";
    cin>>hc;
    cout<<endl<<endl;
    re=hc/mo;
    cout<<"\033[31m"<<"\n The resistivity of p/n type semiconductor  = "<<"\033[0m"<< re <<" Ohm-meter "<<endl;
    break;
    } 

    case 'q':
    {
    long double jc,bz,wi,nc,ec,vh ; 
    cout<<"\033[32m"<<"\n Enter the current density (A/m^2): "<<"\033[0m";
    cin>>jc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the magnetic field (T): "<<"\033[0m";
    cin>>bz;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the width of sample (m): "<<"\033[0m";
    cin>>wi;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the concentration of donor/acceptor atom (/m^3): "<<"\033[0m";
    cin>>nc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the charge of electron (c): "<<"\033[0m";
    cin>>ec;
    cout<<endl<<endl;
    vh=((jc*bz*wi)/(nc*ec));
    cout<<"\033[31m"<<"\n The Hall voltage is  = "<<"\033[0m"<< vh <<" Volt "<<endl;
    break;
    } 

    case 'r':
    {
    long double mo,re,nc,ec ; 
    cout<<"\033[32m"<<"\n Enter the mobility (m^2/V-sec): "<<"\033[0m";
    cin>>mo;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the resistivity (Ohm-m): "<<"\033[0m";
    cin>>re;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the charge of electron (c): "<<"\033[0m";
    cin>>ec;
    cout<<endl<<endl;
    nc=(1/(ec*mo*re));
    cout<<"\033[31m"<<"\n The concentration of acceptor/donor atoms is  = "<<"\033[0m"<< nc <<" /m^3 "<<endl;
    break;
    } 

    case 's':
    {
    long double wl,ri,an,th ; 
    cout<<"\033[32m"<<"\n Enter the wavelength (cm): "<<"\033[0m";
    cin>>wl;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the refractive index: "<<"\033[0m";
    cin>>ri;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the cosine of that angle (degrees): "<<"\033[0m";
    cin>>an;
    cout<<endl<<endl;
    th=(wl/(4*ri*an));
    cout<<"\033[31m"<<"\n The thickness of the film due to reflected ray is  = "<<"\033[0m"<< th <<" centimeter "<<endl;
    break;
    } 

    case 't':
    {
    long double ri,th,an,wl,no ; 
    cout<<"\033[32m"<<"\n Enter the wavelength (cm): "<<"\033[0m";
    cin>>wl;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the refractive index: "<<"\033[0m";
    cin>>ri;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the cos of the angle (degrees): "<<"\033[0m";
    cin>>an;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the thickness of film (cm): "<<"\033[0m";
    cin>>th;
    cout<<endl<<endl;
    no=((2*ri*th*an)/wl);
    cout<<"\033[31m"<<"\n The order of interference band is  = "<<"\033[0m"<< no <<endl;
    } 

    case 'u':
    {
    long double ri,th,wl ; 
    cout<<"\033[32m"<<"\n Enter the wavelength (cm): "<<"\033[0m";
    cin>>wl;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the refractive index: "<<"\033[0m";
    cin>>ri;
    cout<<endl<<endl;
    th=(wl/(2*ri));
    cout<<"\033[31m"<<"\n The minimum thickness of the film that will appear dark in the reflected light is  = "<<"\033[0m"<< th <<" centimeter "<<endl;
    break;
    } 

    case 'v':
    {
    long double ri,th,wl ; 
    cout<<"\033[32m"<<"\n Enter the wavelength (cm): "<<"\033[0m";
    cin>>wl;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the refractive index: "<<"\033[0m";
    cin>>ri;
    cout<<endl<<endl;
    th=(wl/(4*ri));
    cout<<"\033[31m"<<"\n The minimum thickness of the film that will appear bright in the reflected light is  = "<<"\033[0m"<< th <<" centimeter "<<endl;
    break;
    } 

    case 'w':
    {
    long double tm,hc,h0,tc ; 
    cout<<"\033[32m"<<"\n Enter the temperature (K): "<<"\033[0m";
    cin>>tm;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the critical field at "<<"\033[0m"<< tm <<"\033[32m"<<"K (A/m):"<<"\033[0m";
    cin>>hc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the critical field at absolute zero (A/m): "<<"\033[0m";
    cin>>h0;
    cout<<endl<<endl;
    tc=sqrt(1-(hc/h0));
    tc=tm/tc;
    cout<<"\033[31m"<<"\n The critical temperature of the element is  = "<<"\033[0m"<< tc <<" Kelvin "<<endl;
    break;
    } 

    case 'x':
    {
    long double tm,hc,h0,tc ; 
    cout<<"\033[32m"<<"\n Enter the temperature (K): "<<"\033[0m";
    cin>>tm;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the critical temperature (K): "<<"\033[0m";
    cin>>tc;
    cout<<endl;
    cout<<"\033[32m"<<"\n Enter the critical field at absolute zero (T): "<<"\033[0m";
    cin>>h0;
    cout<<endl<<endl;
    hc=(1-(tm/tc));
    hc=h0*hc;
    cout<<"\033[31m"<<"\n The critical magnetic field of the element is  = "<<"\033[0m"<< hc <<" Tesla "<<endl;
    break;
    } 
  
    default:
    cout<<"\033[31m"<<"You entered invalid type! "<<"\033[0m"<<endl;
 }
}