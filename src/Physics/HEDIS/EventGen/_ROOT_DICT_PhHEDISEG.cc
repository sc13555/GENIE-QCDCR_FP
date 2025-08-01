// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME _ROOT_DICT_PhHEDISEG
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
#include "HEDISGenerator.h"
#include "HEDISInteractionListGenerator.h"
#include "HEDISKinematicsGenerator.h"

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
   static TClass *geniecLcLHEDISGenerator_Dictionary();
   static void geniecLcLHEDISGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHEDISGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHEDISGenerator(Long_t size, void *p);
   static void delete_geniecLcLHEDISGenerator(void *p);
   static void deleteArray_geniecLcLHEDISGenerator(void *p);
   static void destruct_geniecLcLHEDISGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISGenerator*)
   {
      ::genie::HEDISGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISGenerator", "", 31,
                  typeid(::genie::HEDISGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISGenerator) );
      instance.SetNew(&new_geniecLcLHEDISGenerator);
      instance.SetNewArray(&newArray_geniecLcLHEDISGenerator);
      instance.SetDelete(&delete_geniecLcLHEDISGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHEDISGenerator);
      instance.SetDestructor(&destruct_geniecLcLHEDISGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISGenerator*>(nullptr))->GetClass();
      geniecLcLHEDISGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHEDISInteractionListGenerator_Dictionary();
   static void geniecLcLHEDISInteractionListGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHEDISInteractionListGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHEDISInteractionListGenerator(Long_t size, void *p);
   static void delete_geniecLcLHEDISInteractionListGenerator(void *p);
   static void deleteArray_geniecLcLHEDISInteractionListGenerator(void *p);
   static void destruct_geniecLcLHEDISInteractionListGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISInteractionListGenerator*)
   {
      ::genie::HEDISInteractionListGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISInteractionListGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISInteractionListGenerator", "", 95,
                  typeid(::genie::HEDISInteractionListGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISInteractionListGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISInteractionListGenerator) );
      instance.SetNew(&new_geniecLcLHEDISInteractionListGenerator);
      instance.SetNewArray(&newArray_geniecLcLHEDISInteractionListGenerator);
      instance.SetDelete(&delete_geniecLcLHEDISInteractionListGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHEDISInteractionListGenerator);
      instance.SetDestructor(&destruct_geniecLcLHEDISInteractionListGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISInteractionListGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISInteractionListGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISInteractionListGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISInteractionListGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISInteractionListGenerator*>(nullptr))->GetClass();
      geniecLcLHEDISInteractionListGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISInteractionListGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *geniecLcLHEDISKinematicsGenerator_Dictionary();
   static void geniecLcLHEDISKinematicsGenerator_TClassManip(TClass*);
   static void *new_geniecLcLHEDISKinematicsGenerator(void *p = nullptr);
   static void *newArray_geniecLcLHEDISKinematicsGenerator(Long_t size, void *p);
   static void delete_geniecLcLHEDISKinematicsGenerator(void *p);
   static void deleteArray_geniecLcLHEDISKinematicsGenerator(void *p);
   static void destruct_geniecLcLHEDISKinematicsGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genie::HEDISKinematicsGenerator*)
   {
      ::genie::HEDISKinematicsGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genie::HEDISKinematicsGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("genie::HEDISKinematicsGenerator", "", 159,
                  typeid(::genie::HEDISKinematicsGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &geniecLcLHEDISKinematicsGenerator_Dictionary, isa_proxy, 0,
                  sizeof(::genie::HEDISKinematicsGenerator) );
      instance.SetNew(&new_geniecLcLHEDISKinematicsGenerator);
      instance.SetNewArray(&newArray_geniecLcLHEDISKinematicsGenerator);
      instance.SetDelete(&delete_geniecLcLHEDISKinematicsGenerator);
      instance.SetDeleteArray(&deleteArray_geniecLcLHEDISKinematicsGenerator);
      instance.SetDestructor(&destruct_geniecLcLHEDISKinematicsGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genie::HEDISKinematicsGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::genie::HEDISKinematicsGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genie::HEDISKinematicsGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *geniecLcLHEDISKinematicsGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genie::HEDISKinematicsGenerator*>(nullptr))->GetClass();
      geniecLcLHEDISKinematicsGenerator_TClassManip(theClass);
   return theClass;
   }

   static void geniecLcLHEDISKinematicsGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHEDISGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISGenerator : new ::genie::HEDISGenerator;
   }
   static void *newArray_geniecLcLHEDISGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISGenerator[nElements] : new ::genie::HEDISGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHEDISGenerator(void *p) {
      delete (static_cast<::genie::HEDISGenerator*>(p));
   }
   static void deleteArray_geniecLcLHEDISGenerator(void *p) {
      delete [] (static_cast<::genie::HEDISGenerator*>(p));
   }
   static void destruct_geniecLcLHEDISGenerator(void *p) {
      typedef ::genie::HEDISGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HEDISGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHEDISInteractionListGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISInteractionListGenerator : new ::genie::HEDISInteractionListGenerator;
   }
   static void *newArray_geniecLcLHEDISInteractionListGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISInteractionListGenerator[nElements] : new ::genie::HEDISInteractionListGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHEDISInteractionListGenerator(void *p) {
      delete (static_cast<::genie::HEDISInteractionListGenerator*>(p));
   }
   static void deleteArray_geniecLcLHEDISInteractionListGenerator(void *p) {
      delete [] (static_cast<::genie::HEDISInteractionListGenerator*>(p));
   }
   static void destruct_geniecLcLHEDISInteractionListGenerator(void *p) {
      typedef ::genie::HEDISInteractionListGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HEDISInteractionListGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_geniecLcLHEDISKinematicsGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISKinematicsGenerator : new ::genie::HEDISKinematicsGenerator;
   }
   static void *newArray_geniecLcLHEDISKinematicsGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genie::HEDISKinematicsGenerator[nElements] : new ::genie::HEDISKinematicsGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_geniecLcLHEDISKinematicsGenerator(void *p) {
      delete (static_cast<::genie::HEDISKinematicsGenerator*>(p));
   }
   static void deleteArray_geniecLcLHEDISKinematicsGenerator(void *p) {
      delete [] (static_cast<::genie::HEDISKinematicsGenerator*>(p));
   }
   static void destruct_geniecLcLHEDISKinematicsGenerator(void *p) {
      typedef ::genie::HEDISKinematicsGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genie::HEDISKinematicsGenerator

namespace {
  void TriggerDictionaryInitialization_libGPhHEDISEG_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"Physics/HEDIS/EventGen",
"GENIE",
"GENIE/Physics/HEDIS/EventGen",
"../include",
"../include/GENIE",
"../include/GENIE/Physics/HEDIS/EventGen",
"/usr/include/libxml2",
"/usr/include/log4cpp",
"/home/subin137/GENIE-build/root-install/include",
"/home/subin137/GENIE-3.06.00/Generator/src/",
"/home/subin137/program/pythia8308/include",
"/home/subin137/GENIE-build/root-install/include/",
"/home/subin137/GENIE-3.06.00/Generator/src/Physics/HEDIS/EventGen/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGPhHEDISEG dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace genie{class HEDISGenerator;}
namespace genie{class HEDISInteractionListGenerator;}
namespace genie{class HEDISKinematicsGenerator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGPhHEDISEG dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//____________________________________________________________________________
/*!

\class    genie::HEDISGenerator

\brief    Generates the final state leptonic and hadronic system in v HEDIS 
          interactions.
          Is a concrete implementation of the EventRecordVisitorI interface.

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_GENERATOR_H_
#define _HEDIS_GENERATOR_H_

#include "Physics/Common/HadronicSystemGenerator.h"


namespace genie {

class HEDISGenerator : public HadronicSystemGenerator {

public :
  HEDISGenerator();
  HEDISGenerator(string config);
 ~HEDISGenerator();

  // implement the EventRecordVisitorI interface
  void Initialize        (void)               const;
  void ProcessEventRecord(GHepRecord * evrec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  void AddPrimaryLepton         (GHepRecord * evrec) const;

  void LoadConfig (void);

  const EventRecordVisitorI * fHadronizationModel;

};

}      // genie namespace

#endif // _HEDIS_HADRONIC_SYSTEM_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::HEDISInteractionListGenerator

\brief    Concrete implementations of the InteractionListGeneratorI interface.
          Generate a list of all the Interaction (= event summary) objects that
          can be generated by the HEDIS EventGenerator.

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_INTERACTION_LIST_GENERATOR_H_
#define _HEDIS_INTERACTION_LIST_GENERATOR_H_

#include <map>

#include "Framework/EventGen/InteractionListGeneratorI.h"
#include "Framework/Interaction/Interaction.h"

using std::multimap;

namespace genie {

class Interaction;

class HEDISInteractionListGenerator : public InteractionListGeneratorI {

public :
  HEDISInteractionListGenerator();
  HEDISInteractionListGenerator(string config);
 ~HEDISInteractionListGenerator();

  // implement the InteractionListGeneratorI interface
  InteractionList * CreateInteractionList(const InitialState & init) const;
  InteractionList * CreateHEDISlist(vector<InitialState> vinit, 
                                  vector<InteractionType_t> vinttype) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:


  multimap<int,bool> GetHitQuarks(const Interaction * interaction) const;
  vector<int> GetFinalQuarks(const Interaction * interaction) const;

  void LoadConfigData(void);
  
  bool fIsCC;
  bool fIsNC;

};

}      // genie namespace

#endif // _HEDIS_INTERACTION_LIST_GENERATOR_H_
//____________________________________________________________________________
/*!

\class    genie::HEDISKinematicsGenerator

\brief    Generates values for the kinematic variables describing HEDIS v
          interaction events.
          Is a concrete implementation of the EventRecordVisitorI interface.

          Max Xsec are precomputed as the total xsec and they are stored in 
          ascii files. This saves a lot of computational time.

\author   Alfonso Garcia <alfonsog \at nikhef.nl>
          NIKHEF

\created  August 28, 2019

\cpright  Copyright (c) 2003-2024, The GENIE Collaboration
          For the full text of the license visit http://copyright.genie-mc.org
          or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _HEDIS_KINEMATICS_GENERATOR_H_
#define _HEDIS_KINEMATICS_GENERATOR_H_

#include "Physics/Common/KineGeneratorWithCache.h"

namespace genie {

class HEDISKinematicsGenerator : public KineGeneratorWithCache {

public :
  HEDISKinematicsGenerator();
  HEDISKinematicsGenerator(string config);
  ~HEDISKinematicsGenerator();

  double ComputeMaxXSec       (const Interaction * interaction) const;

  // implement the EventRecordVisitorI interface
  void ProcessEventRecord(GHepRecord * event_rec) const;

  // overload the Algorithm::Configure() methods to load private data
  // members from configuration options
  void Configure(const Registry & config);
  void Configure(string config);

private:

  double Scan(Interaction * interaction, Range1D_t xrange,Range1D_t Q2range, int NKnotsQ2, int NKnotsX, double ME2, double & x_scan, double & Q2_scan) const;

  void   LoadConfig           (void);

  int    fWideNKnotsX;
  int    fWideNKnotsQ2;
  double fWideRange;
  int    fFineNKnotsX;
  int    fFineNKnotsQ2;
  double fFineRange;

  double fSFXmin;   ///< minimum value of x for which SF tables are computed
  double fSFQ2min;  ///< minimum value of Q2 for which SF tables are computed 
  double fSFQ2max;  ///< maximum value of Q2 for which SF tables are computed 

};

}      // genie namespace

#endif // _HEDIS_KINEMATICS_GENERATOR_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genie::HEDISGenerator", payloadCode, "@",
"genie::HEDISInteractionListGenerator", payloadCode, "@",
"genie::HEDISKinematicsGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGPhHEDISEG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGPhHEDISEG_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGPhHEDISEG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGPhHEDISEG() {
  TriggerDictionaryInitialization_libGPhHEDISEG_Impl();
}
