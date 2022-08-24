#ifndef INCLUDED_io_newgrounds_objects_events_ResultType
#define INCLUDED_io_newgrounds_objects_events_ResultType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(io,newgrounds,objects,events,ResultType)
namespace io{
namespace newgrounds{
namespace objects{
namespace events{


class ResultType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ResultType_obj OBJ_;

	public:
		ResultType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("io.newgrounds.objects.events.ResultType",b8,b9,13,dc); }
		::String __ToString() const { return HX_("ResultType.",f7,cd,8c,a5) + _hx_tag; }

		static ::io::newgrounds::objects::events::ResultType Error(::String error);
		static ::Dynamic Error_dyn();
		static ::io::newgrounds::objects::events::ResultType Success;
		static inline ::io::newgrounds::objects::events::ResultType Success_dyn() { return Success; }
};

} // end namespace io
} // end namespace newgrounds
} // end namespace objects
} // end namespace events

#endif /* INCLUDED_io_newgrounds_objects_events_ResultType */ 
