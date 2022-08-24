#include <hxcpp.h>

#ifndef INCLUDED_io_newgrounds_objects_events_ResultType
#include <io/newgrounds/objects/events/ResultType.h>
#endif
namespace io{
namespace newgrounds{
namespace objects{
namespace events{

::io::newgrounds::objects::events::ResultType ResultType_obj::Error(::String error)
{
	return ::hx::CreateEnum< ResultType_obj >(HX_("Error",a8,3b,57,06),0,1)->_hx_init(0,error);
}

::io::newgrounds::objects::events::ResultType ResultType_obj::Success;

bool ResultType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Error",a8,3b,57,06)) { outValue = ResultType_obj::Error_dyn(); return true; }
	if (inName==HX_("Success",a3,4d,9f,85)) { outValue = ResultType_obj::Success; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ResultType_obj)

int ResultType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Error",a8,3b,57,06)) return 0;
	if (inName==HX_("Success",a3,4d,9f,85)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ResultType_obj,Error,return)

int ResultType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Error",a8,3b,57,06)) return 1;
	if (inName==HX_("Success",a3,4d,9f,85)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ResultType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Error",a8,3b,57,06)) return Error_dyn();
	if (inName==HX_("Success",a3,4d,9f,85)) return Success;
	return super::__Field(inName,inCallProp);
}

static ::String ResultType_obj_sStaticFields[] = {
	HX_("Error",a8,3b,57,06),
	HX_("Success",a3,4d,9f,85),
	::String(null())
};

::hx::Class ResultType_obj::__mClass;

Dynamic __Create_ResultType_obj() { return new ResultType_obj; }

void ResultType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("io.newgrounds.objects.events.ResultType",b8,b9,13,dc), ::hx::TCanCast< ResultType_obj >,ResultType_obj_sStaticFields,0,
	&__Create_ResultType_obj, &__Create,
	&super::__SGetClass(), &CreateResultType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ResultType_obj::__GetStatic;
}

void ResultType_obj::__boot()
{
Success = ::hx::CreateConstEnum< ResultType_obj >(HX_("Success",a3,4d,9f,85),1);
}


} // end namespace io
} // end namespace newgrounds
} // end namespace objects
} // end namespace events
