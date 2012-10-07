#ifndef __GMETASHAREDPTRTRAITS_BOOST_SHARED_PTR_H
#define __GMETASHAREDPTRTRAITS_BOOST_SHARED_PTR_H

#include "cpgf/metatraits/gmetasharedptrtraits.h"

#include <boost/shared_ptr.hpp>


namespace cpgf {

template <typename T>
struct GMetaTraitsCreateSharedPointerTraits <boost::shared_ptr<T> >
{
	static IMetaSharedPointerTraits * createSharedPointerTraits(const GMetaTraitsParam &) {
		return new gmetasharedptrtraits_internal::GMetaTraitsCreateSharedPointerTraitsGeneral<T, boost::shared_ptr<T> >();
	}
};



} // namespace cpgf


#endif
