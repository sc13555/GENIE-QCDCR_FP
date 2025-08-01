// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHEDISXS
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "HEDISPXSec.h"
#include "HEDISStrucFunc.h"
#include "HEDISXSec.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace genie {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genie_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genie", 0 /*version*/, "Framework/Algorithm/AlgStatus.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &genie_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genie_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *geniecLcLHEDISStrucFunc_Dictionary();
   static void geniecLcLHEDISStrucFunc_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISStrucFunc*)
   {
      ::genie::HEDISStrucFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISStrucFunc));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISStrucFunc", "HEDISStrucFunc.h", 191,
                  typeid(::genie::HEDISStrucFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISStrucFunc_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISStrucFunc) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISStrucFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISStrucFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISStrucFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISStrucFunc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISStrucFunc*>(nullptr))->GetClass();
      geniecLcLHEDISStrucFunc_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISStrucFunc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHEDISPXSec_Dictionary();
   static void geniecLcLHEDISPXSec_TClassManip(TClass*);
   static void *new_geniecLcLHEDISPXSec(void *p = nullptr);
   static void *newArray_geniecLcLHEDISPXSec(Long_t size, void *p);
   static void delete_geniecLcLHEDISPXSec(void *p);
   static void deleteArray_geniecLcLHEDISPXSec(void *p);
   static void destruct_geniecLcLHEDISPXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISPXSec*)
   {
      ::genie::HEDISPXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISPXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISPXSec", "", 32,
                  typeid(::genie::HEDISPXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISPXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISPXSec) );
      instance.SetNew(&new_geniecLcLHEDISPXSec);
      instance.SetNewArray(&newArray_geniecLcLHEDISPXSec);
      instance.SetDelete(&delete_geniecLcLHEDISPXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLHEDISPXSec);
      instance.SetDestructor(&destruct_geniecLcLHEDISPXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISPXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISPXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISPXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISPXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISPXSec*>(nullptr))->GetClass();
      geniecLcLHEDISPXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISPXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHEDISXSec_Dictionary();
   static void geniecLcLHEDISXSec_TClassManip(TClass*);
   static void *new_geniecLcLHEDISXSec(void *p = nullptr);
   static void *newArray_geniecLcLHEDISXSec(Long_t size, void *p);
   static void delete_geniecLcLHEDISXSec(void *p);
   static void deleteArray_geniecLcLHEDISXSec(void *p);
   static void destruct_geniecLcLHEDISXSec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISXSec*)
   {
      ::genie::HEDISXSec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISXSec));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISXSec", "", 364,
                  typeid(::genie::HEDISXSec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISXSec_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISXSec) );
      instance.SetNew(&new_geniecLcLHEDISXSec);
      instance.SetNewArray(&newArray_geniecLcLHEDISXSec);
      instance.SetDelete(&delete_geniecLcLHEDISXSec);
      instance.SetDeleteArray(&deleteArray_geniecLcLHEDISXSec);
      instance.SetDestructor(&destruct_geniecLcLHEDISXSec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISXSec*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISXSec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISXSec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISXSec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISXSec*>(nullptr))->GetClass();
      geniecLcLHEDISXSec_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISXSec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
} // end of namespace ROOT for class ::genie::HEDISStrucFunc

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHEDISPXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISPXSec : new ::genie::HEDISPXSec;
   }
   static void *newArray_geniecLcLHEDISPXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISPXSec[nElements] : new ::genie::HEDISPXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHEDISPXSec(void *p) {
      delete (static_cast<::genie::HEDISPXSec*>(p));
   }
   static void deleteArray_geniecLcLHEDISPXSec(void *p) {
      delete [] (static_cast<::genie::HEDISPXSec*>(p));
   }
   static void destruct_geniecLcLHEDISPXSec(void *p) {
      typedef ::genie::HEDISPXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HEDISPXSec

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHEDISXSec(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISXSec : new ::genie::HEDISXSec;
   }
   static void *newArray_geniecLcLHEDISXSec(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISXSec[nElements] : new ::genie::HEDISXSec[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHEDISXSec(void *p) {
      delete (static_cast<::genie::HEDISXSec*>(p));
   }
   static void deleteArray_geniecLcLHEDISXSec(void *p) {
      delete [] (static_cast<::genie::HEDISXSec*>(p));
   }
   static void destruct_geniecLcLHEDISXSec(void *p) {
      typedef ::genie::HEDISXSec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HEDISXSec

namespace {
  void TriggerDictionaryInitialization_libGPhHEDISXS_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HEDIS/XSection",
"GENIE",
"GENIE/Physics/HEDIS/XSection",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HEDIS/XSection",
"/usr/include/libxml2",
"/usr/include/log4cpp",
"/home/subin137/GENIE-build/root-install/include",
"/home/subin137/GENIE-3.06.00/Generator/src/",
"/home/subin137/GENIE-build/root-install/include/",
"/home/subin137/GENIE-3.06.00/Generator/src/Physics/HEDIS/XSection/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHEDISXS dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class __attribute__((annotate("$clingAutoload$Physics/HEDIS/XSection/HEDISStrucFunc.h")))  HEDISStrucFunc;}
namespace genie{class HEDISPXSec;}
namespace genie{class HEDISXSec;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHEDISXS dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::HEDISPXSec

\brief    Computes the double differential Cross Section for HEDIS. \n
          Is a concrete implementation of the XSecAlgorithmI interface.

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_PXSEC_H_
#define _HEDIS_PXSEC_H_

#include "Framework/EventGen/XSecAlgorithmI.h"
#include "Physics/HEDIS/XSection/HEDISStrucFunc.h"

namespace genie {

  class XSecIntegratorI;

  class HEDISPXSec : public XSecAlgorithmI {

    public:
      HEDISPXSec();
      HEDISPXSec(string config);
      virtual ~HEDISPXSec();

      // XSecAlgorithmI interface implementation
      double XSec            (const Interaction * i, KinePhaseSpace_t k) const;
      double Integral        (const Interaction * i) const;
      bool   ValidProcess    (const Interaction * i) const;

      // overload the Algorithm::Configure() methods to load private data
      // members from configuration options
      void Configure(const Registry & config);
      void Configure(string config);

    private:
      void   LoadConfig (void);
      double ds_dxdy      (SF_xQ2 sf, double x, double y) const;
      double ds_dxdy_mass (SF_xQ2 sf, double x, double y, double e, double mt, double ml2) const;

      const XSecIntegratorI *        fXSecIntegrator;     ///< diff. xsec integrator
    
      double fWmin;            ///< Minimum value of W
      bool fMassTerms;         ///< Account for second order effects in DDxsec
      SF_info fSFinfo;         ///< Information used to computed SF
  };

}       // genie namespace

#endif  // _HEDIS_PXSEC_H_
//____________________________________________________________________________
/*!

\class    genie::HEDISStrcuFunc

\brief    Singleton class to load Structure Functions used in HEDIS.

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_STRUC_FUNC_H_
#define _HEDIS_STRUC_FUNC_H_

#include "Framework/Numerical/BLI2D.h"
#include "Framework/Interaction/Interaction.h"

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>


using std::map;
using std::vector;
using std::string;
using std::to_string;

namespace genie {

  struct SF_info {

    string LHAPDFset;
    int    LHAPDFmember;
    bool   IsNLO;
    string Scheme;
    int    QrkThrs;
    int    NGridX;
    int    NGridQ2;
    double XGridMin;
    double Q2GridMin, Q2GridMax;
    double MassW, MassZ;
    double Rho, Sin2ThW;
    double Vud,Vus,Vub;
    double Vcd,Vcs,Vcb;
    double Vtd,Vts,Vtb;

  };

  inline bool operator== (const SF_info& a, const SF_info& b) {
    
    if ( a.LHAPDFmember != b.LHAPDFmember   ) return false;
    if ( a.LHAPDFset    != b.LHAPDFset      ) return false;
    if ( a.IsNLO        != b.IsNLO          ) return false;
    if ( a.Scheme       != b.Scheme         ) return false;
    if ( a.QrkThrs      != b.QrkThrs        ) return false;
    if ( a.NGridX       != b.NGridX         ) return false;
    if ( a.NGridQ2      != b.NGridQ2        ) return false;
    if ( abs(a.XGridMin-b.XGridMin)>1e-10   ) return false;
    if ( abs(a.Q2GridMin-b.Q2GridMin)>1e-10 ) return false;
    if ( abs(a.Q2GridMax-b.Q2GridMax)>1e-10 ) return false;
    if ( abs(a.MassW-b.MassW)>1e-10         ) return false;
    if ( abs(a.MassZ-b.MassZ)>1e-10         ) return false;
    if ( abs(a.Rho-b.Rho)>1e-10             ) return false;
    if ( abs(a.Sin2ThW-b.Sin2ThW)>1e-10     ) return false;
    if ( abs(a.Vud-b.Vud)>1e-10             ) return false;
    if ( abs(a.Vus-b.Vus)>1e-10             ) return false;
    if ( abs(a.Vub-b.Vub)>1e-10             ) return false;
    if ( abs(a.Vcd-b.Vcd)>1e-10             ) return false;
    if ( abs(a.Vcs-b.Vcs)>1e-10             ) return false;
    if ( abs(a.Vcb-b.Vcb)>1e-10             ) return false;
    if ( abs(a.Vtd-b.Vtd)>1e-10             ) return false;
    if ( abs(a.Vts-b.Vts)>1e-10             ) return false;
    if ( abs(a.Vtb-b.Vtb)>1e-10             ) return false;
    return true;

  }

  inline std::istream & operator>> (std::istream& is, SF_info& a) {

    string saux;
    std::getline (is,saux); //# Header
    std::getline (is,saux); //# Header
    std::getline (is,saux); //# Header
    std::getline (is,saux); //# Header
    std::getline (is,saux); //# LHAPDF set
    std::getline (is,saux); a.LHAPDFset=saux.c_str();
    std::getline (is,saux); //# LHAPDF member
    std::getline (is,saux); a.LHAPDFmember=atoi(saux.c_str());
    std::getline (is,saux); //#NLO
    std::getline (is,saux); a.IsNLO=atoi(saux.c_str());
    std::getline (is,saux); //# Mass scheme
    std::getline (is,saux); a.Scheme=saux.c_str();
    std::getline (is,saux); //# Quark threshold
    std::getline (is,saux); a.QrkThrs=atof(saux.c_str());
    std::getline (is,saux); //# NGridX
    std::getline (is,saux); a.NGridX=atoi(saux.c_str());
    std::getline (is,saux); //# NGridQ2
    std::getline (is,saux); a.NGridQ2=atoi(saux.c_str());
    std::getline (is,saux); //# XGridMin
    std::getline (is,saux); a.XGridMin=atof(saux.c_str());
    std::getline (is,saux); //# Q2min
    std::getline (is,saux); a.Q2GridMin=atof(saux.c_str());
    std::getline (is,saux); //# Q2max
    std::getline (is,saux); a.Q2GridMax=atof(saux.c_str());
    std::getline (is,saux); //# Mass W
    std::getline (is,saux); a.MassW=atof(saux.c_str());
    std::getline (is,saux); //# Mass Z
    std::getline (is,saux); a.MassZ=atof(saux.c_str());
    std::getline (is,saux); //# Rho
    std::getline (is,saux); a.Rho=atof(saux.c_str());
    std::getline (is,saux); //# Sin2ThW
    std::getline (is,saux); a.Sin2ThW=atof(saux.c_str());
    std::getline (is,saux); //# CKM
    std::getline (is,saux); a.Vud=atof(saux.c_str());
    std::getline (is,saux); a.Vus=atof(saux.c_str());
    std::getline (is,saux); a.Vub=atof(saux.c_str());
    std::getline (is,saux); a.Vcd=atof(saux.c_str());
    std::getline (is,saux); a.Vcs=atof(saux.c_str());
    std::getline (is,saux); a.Vcb=atof(saux.c_str());
    std::getline (is,saux); a.Vtd=atof(saux.c_str());
    std::getline (is,saux); a.Vts=atof(saux.c_str());
    std::getline (is,saux); a.Vtb=atof(saux.c_str());
    return is;

  }

  inline std::ostream & operator<< (std::ostream& os, const SF_info& a) {

    return os << '\n'
              << "#--------------------------------------------------------------------------------"    << '\n'
              << "# Metafile that stores information used to generate Structure Functions for HEDIS"   << '\n'
              << "#--------------------------------------------------------------------------------"    << '\n'
              << "# LHAPDF set"    << '\n'
              << a.LHAPDFset     << '\n'
              << "# LHAPDF member" << '\n'
              << a.LHAPDFmember  << '\n'
              << "# NLO"        << '\n' 
              << a.IsNLO         << '\n' 
              << "# Mass Scheme"       << '\n'
              << a.Scheme        << '\n'
              << "# Quark threshold"      << '\n'
              << a.QrkThrs       << '\n'
              << "# NX"       << '\n'
              << a.NGridX        << '\n'
              << "# NQ2"      << '\n'
              << a.NGridQ2       << '\n'
              << "# Xmin"     << '\n'
              << a.XGridMin      << '\n'
              << "# Q2min"    << '\n'
              << a.Q2GridMin     << '\n'
              << "# Q2max"    << '\n'
              << a.Q2GridMax     << '\n'
              << "# Mass W"        << '\n'
              << a.MassW         << '\n'
              << "# Mass Z"        << '\n'
              << a.MassZ         << '\n'
              << "# Rho"          << '\n'
              << a.Rho           << '\n'
              << "# Sin2ThW"      << '\n'
              << a.Sin2ThW       << '\n'
              << "# CKM"          << '\n'
              << a.Vud           << '\n'
              << a.Vus           << '\n'
              << a.Vub           << '\n'
              << a.Vcd           << '\n'
              << a.Vcs           << '\n'
              << a.Vcb           << '\n'
              << a.Vtd           << '\n'
              << a.Vts           << '\n'
              << a.Vtb           << '\n';

  }

  struct SF_xQ2 {

    double F1;
    double F2;
    double F3;

  };

  class HEDISStrucFunc
  {
    public:

      // ................................................................
      // HEDIS structure functions type
      //

      typedef enum StrucFuncType {  
        kMHTUndefined = 0,
        kSFT1, 
        kSFT2, 
        kSFT3, 
        kSFnumber, 
      } HEDISStrucFuncType_t;

      // ................................................................
      // HEDIS form factor type
      //

      class HEDISStrucFuncTable 
      {
        public:
          HEDISStrucFuncTable() { }
          ~HEDISStrucFuncTable() { /* note: should delete the grids! */ }
          map< HEDISStrucFunc::HEDISStrucFuncType_t, genie::BLI2DNonUnifGrid * > Table;
      };

      // ................................................................

      static HEDISStrucFunc * Instance(SF_info sfinfo);

      // method to return values of the SF for a particular channel in x and Q2
      SF_xQ2 EvalQrkSFLO  ( const Interaction * in, double x, double Q2 );
      SF_xQ2 EvalNucSFLO  ( const Interaction * in, double x, double Q2 ); 
      SF_xQ2 EvalNucSFNLO ( const Interaction * in, double x, double Q2 );

    private:

      // Ctors & dtor
      HEDISStrucFunc(SF_info sfinfo);
      HEDISStrucFunc(const HEDISStrucFunc &);
     ~HEDISStrucFunc();

      void CreateQrkSF    ( const Interaction * in, string sfFile );
      void CreateNucSF    ( const Interaction * in, string sfFile );

      string  QrkSFName ( const Interaction * in ); 
      string  NucSFName ( const Interaction * in ) ;
      int     QrkSFCode ( const Interaction * in ); 
      int     NucSFCode ( const Interaction * in ) ;

      // Self
      static HEDISStrucFunc * fgInstance;

      // These map holds all SF tables (interaction channel is the key)
      map<int, HEDISStrucFuncTable> fQrkSFLOTables;
      map<int, HEDISStrucFuncTable> fNucSFLOTables;
      map<int, HEDISStrucFuncTable> fNucSFNLOTables;

      SF_info fSF;
      vector<double> sf_x_array;
      vector<double> sf_q2_array;

      // singleton cleaner
      struct Cleaner {
        void DummyMethodAndSilentCompiler(){}
          ~Cleaner(){
          if (HEDISStrucFunc::fgInstance !=0){
            delete HEDISStrucFunc::fgInstance;
            HEDISStrucFunc::fgInstance = 0;
          }
        }
      };
      friend struct Cleaner;
  };

} // genie namespace

#endif // _HEDIS_STRUC_FUNC_H_
//____________________________________________________________________________
/*!

\class    genie::HEDISXSec

\brief    Computes the HEDIS Cross Section. \n
          Is a concrete implementation of the XSecIntegratorI interface. \n

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_XSEC_H_
#define _HEDIS_XSEC_H_

#include "Physics/XSectionIntegration/XSecIntegratorI.h"

#include <vector>

namespace genie {

class HEDISXSec : public XSecIntegratorI {

public:
  HEDISXSec();
  HEDISXSec(string config);
  virtual ~HEDISXSec();

  //! XSecIntegratorI interface implementation
  double Integrate(const XSecAlgorithmI * model, const Interaction * i) const;

  //! Overload the Algorithm::Configure() methods to load private data
  //! members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:
  void   LoadConfig (void);

  double fSFXmin;   ///< minimum value of x for which SF tables are computed
  double fSFQ2min;  ///< minimum value of Q2 for which SF tables are computed
  double fSFQ2max;  ///< maximum value of Q2 for which SF tables are computed

};

}       // genie namespace
#endif  // _DIS_XSEC_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::HEDISPXSec", payloadCode, "@",
"genie::HEDISStrucFunc", payloadCode, "@",
"genie::HEDISXSec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHEDISXS",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHEDISXS_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHEDISXS_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHEDISXS() {
  TriggerDictionaryInitialization_libGPhHEDISXS_Impl();
}
