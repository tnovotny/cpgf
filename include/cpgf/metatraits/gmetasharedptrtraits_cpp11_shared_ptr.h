#ifndef __GMETASHAREDPTRTRAITS_CPP11_SHARED_PTR_H
#define __GMETASHAREDPTRTRAITS_CPP11_SHARED_PTR_H

#include "cpgf/metatraits/gmetasharedptrtraits.h"

#include <memory>


namespace cpgf {

template <typename T>
struct GMetaTraitsCreateSharedPointerTraits <std::shared_ptr<T> >
{
	static IMetaSharedPointerTraits * createSharedPointerTraits(const GMetaTraitsParam &) {
		return new gmetasharedptrtraits_internal::GMetaTraitsCreateSharedPointerTraitsGeneral<T, std::shared_ptr<T> >();
	}
};



} // namespace cpgf


#endif
