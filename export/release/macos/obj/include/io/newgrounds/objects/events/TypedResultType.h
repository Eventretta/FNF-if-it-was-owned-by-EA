#ifndef INCLUDED_io_newgrounds_objects_events_TypedResultType
#define INCLUDED_io_newgrounds_objects_events_TypedResultType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(io,newgrounds,objects,events,TypedResultType)
namespace io{
namespace newgrounds{
namespace objects{
namespace events{


class TypedResultType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TypedResultType_obj OBJ_;

	public:
		TypedResultType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("io.newgrounds.objects.events.TypedResultType",20,c4,8b,41); }
		::String __ToString() const { return HX_("TypedResultType.",ed,9d,d5,cb) + _hx_tag; }

		static ::io::newgrounds::objects::events::TypedResultType Error(::String error);
		static ::Dynamic Error_dyn();
		static ::io::newgrounds::objects::events::TypedResultType Success( ::Dynamic value);
		static ::Dynamic Success_dyn();
};

} // end namespace io
} // end namespace newgrounds
} // end namespace objects
} // end namespace events

#endif /* INCLUDED_io_newgrounds_objects_events_TypedResultType */ 
