/*@@cpgf@@*/
// Auto generated file, don't modify.

/*@cpgf@creations@@
createMetaClass_metagen_BaseClass
createMetaClass_metagen_CppClass
@@cpgf@creations@*/

#ifndef METADATA_META_CPPCLASS_H
#define METADATA_META_CPPCLASS_H

#include "model/cppclass.h"
#include "cpgf/metatraits/gmetaconverter_string.h"
#include "cpgf/metatraits/gmetaconverter_widestring.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/gselectfunctionbyarity.h"
#include "cpgf/metadata/private/gmetadata_header.h"

namespace metadata {

template <typename TsE1f>
metagen::CppClass &oPeRat0rWrapPer_metagen_CppClass_opAssign_0(TsE1f * sE1F, const metagen::CppClass &pAr9_Am0)
{
    return (*sE1F) = pAr9_Am0;
}

template <typename D_d >
void buildMetaClass_metagen_CppClass(D_d & _d)
{
    using namespace cpgf;
    
    (void)_d;
    
    _d.CPGF_MD_TEMPLATE _base<metagen::CppContainer >();

    _d.CPGF_MD_TEMPLATE _constructor<void * (const clang::Decl *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const metagen::CppClass &)>(cpgf::MakePolicy<GMetaRuleCopyConstReference<0> >());

    _d.CPGF_MD_TEMPLATE _method("getBaseClassList", (const std::vector<const metagen::BaseClass *, std::allocator<const metagen::BaseClass *> > *(metagen::CppClass::*)() const)(&D_d::ClassType::getBaseClassList));
    _d.CPGF_MD_TEMPLATE _method("getConstructorList", (const std::vector<const metagen::CppConstructor *, std::allocator<const metagen::CppConstructor *> > *(metagen::CppClass::*)() const)(&D_d::ClassType::getConstructorList));
    _d.CPGF_MD_TEMPLATE _method("getDestructor", &D_d::ClassType::getDestructor);
    _d.CPGF_MD_TEMPLATE _method("isTemplate", &D_d::ClassType::isTemplate);
    _d.CPGF_MD_TEMPLATE _method("isChainedTemplate", &D_d::ClassType::isChainedTemplate);
    _d.CPGF_MD_TEMPLATE _method("isAnonymous", &D_d::ClassType::isAnonymous);
    _d.CPGF_MD_TEMPLATE _method("isAbstract", &D_d::ClassType::isAbstract);
    _d.CPGF_MD_TEMPLATE _method("getTextOfTemplateParamList", &D_d::ClassType::getTextOfTemplateParamList), cpgf::MakePolicy<GMetaRuleCopyConstReference<0> >();
    _d.CPGF_MD_TEMPLATE _method("getTextOfChainedTemplateParamList", &D_d::ClassType::getTextOfChainedTemplateParamList), cpgf::MakePolicy<GMetaRuleCopyConstReference<0> >();
    _d.CPGF_MD_TEMPLATE _method("getPolicy", &D_d::ClassType::getPolicy);

    _d.CPGF_MD_TEMPLATE _operator<metagen::CppClass &(*)(cpgf::GMetaSelf, const metagen::CppClass &)>(mopHolder = mopHolder, cpgf::MakePolicy<GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", &oPeRat0rWrapPer_metagen_CppClass_opAssign_0<typename D_d::ClassType >);

}

template <typename D_d >
void buildMetaClass_metagen_BaseClass(D_d & _d)
{
    using namespace cpgf;
    
    (void)_d;
    

    _d.CPGF_MD_TEMPLATE _constructor<void * (const clang::CXXBaseSpecifier *, const metagen::CppContext *)>();

    _d.CPGF_MD_TEMPLATE _method("getVisibility", &D_d::ClassType::getVisibility);
    _d.CPGF_MD_TEMPLATE _method("getQualifiedName", &D_d::ClassType::getQualifiedName);
    _d.CPGF_MD_TEMPLATE _method("getCppClass", &D_d::ClassType::getCppClass);

}

cpgf::GDefineMetaInfo createMetaClass_metagen_CppClass();
cpgf::GDefineMetaInfo createMetaClass_metagen_BaseClass();

} // namespace metadata
#include "cpgf/metadata/private/gmetadata_footer.h"

#endif
