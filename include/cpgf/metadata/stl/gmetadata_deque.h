#ifndef __GMETADATA_VECTOR_H
#define __GMETADATA_VECTOR_H


#include "cpgf/metadata/stl/gmetadata_iterator.h"
#include "cpgf/metadata/private/gmetadata_container_common.h"

#include "cpgf/gmetadefine.h"

#include "cpgf/metadata/private/gmetadata_header.h"


namespace cpgf {

namespace metadata_internal {

template <typename T, typename MetaDefine, typename Policy>
void doBuildMetaData_deque(const GMetaDataConfigFlags & config, MetaDefine define, const Policy & policy)
{
	metadata_internal::buildMetaData_CommonContainer<T>(config, define, policy);
	metadata_internal::buildMetaData_CommonIterators<T>(config, define, policy);

	define
		.CPGF_MD_TEMPLATE _method("assign", (void (T::*)(typename T::size_type, const typename T::value_type &)) &T::assign, policy)
		.CPGF_MD_TEMPLATE _method("at", (typename T::reference (T::*)(typename T::size_type)) &T::at, policy)
		.CPGF_MD_TEMPLATE _method("at", (typename T::const_reference (T::*)(typename T::size_type) const) &T::at, policy)
		.CPGF_MD_TEMPLATE _method("back", (typename T::reference (T::*)()) &T::back, policy)
		.CPGF_MD_TEMPLATE _method("back", (typename T::const_reference (T::*)() const) &T::back, policy)
		.CPGF_MD_TEMPLATE _method("front", (typename T::reference (T::*)()) &T::front, policy)
		.CPGF_MD_TEMPLATE _method("front", (typename T::const_reference (T::*)() const) &T::front, policy)
		.CPGF_MD_TEMPLATE _method("max_size", (typename T::size_type (T::*)() const) &T::max_size)
		.CPGF_MD_TEMPLATE _method("pop_back", (void (T::*)()) &T::pop_back)
		.CPGF_MD_TEMPLATE _method("pop_front", (void (T::*)()) &T::pop_front)
		.CPGF_MD_TEMPLATE _method("push_back", (void (T::*)(const typename T::value_type &)) &T::push_back, policy)
		.CPGF_MD_TEMPLATE _method("push_front", (void (T::*)(const typename T::value_type &)) &T::push_front, policy)
		.CPGF_MD_TEMPLATE _method("resize", selectFunctionByArity2(&T::resize), policy)
		.CPGF_MD_TEMPLATE _method("resize", (void (T::*)(typename T::size_type)) &T::resize, policy)

		.CPGF_MD_TEMPLATE _operator<typename T::reference (GMetaSelf, typename T::size_type)>(mopHolder[0], policy)
		.CPGF_MD_TEMPLATE _operator<typename T::const_reference (const GMetaSelf &, typename T::size_type)>(mopHolder[0], policy)

#if CPGF_MD_STL_QUIRK_CONST_ITERATOR()		
		.CPGF_MD_TEMPLATE _method("insert", (typename T::iterator (T::*)(typename T::const_iterator, const typename T::value_type &)) &T::insert, policy)
		.CPGF_MD_TEMPLATE _method("insert", (void (T::*)(typename T::const_iterator, typename T::size_type, const typename T::value_type &)) &T::insert, policy)
#else
		.CPGF_MD_TEMPLATE _method("insert", (typename T::iterator (T::*)(typename T::iterator, const typename T::value_type &)) &T::insert, policy)
		.CPGF_MD_TEMPLATE _method("insert", (void (T::*)(typename T::iterator, typename T::size_type, const typename T::value_type &)) &T::insert, policy)
#endif
	;
}

} // namespace metadata_internal


template <typename MetaDefine, typename Policy>
void buildMetaData_deque(const GMetaDataConfigFlags & config, MetaDefine define, const Policy & policy)
{
	metadata_internal::doBuildMetaData_deque<typename MetaDefine::ClassType>(config, define, policy);
}

template <typename MetaDefine, typename Policy>
void buildMetaData_deque(MetaDefine define, const Policy & policy)
{
	buildMetaData_deque(mdcScriptable, define, policy);
}


} // namespace cpgf


#include "cpgf/metadata/private/gmetadata_footer.h"



#endif


