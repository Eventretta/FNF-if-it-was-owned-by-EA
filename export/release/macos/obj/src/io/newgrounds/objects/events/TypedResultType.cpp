#include <hxcpp.h>

#ifndef INCLUDED_io_newgrounds_objects_events_TypedResultType
#include <io/newgrounds/objects/events/TypedResultType.h>
#endif
namespace io{
namespace newgrounds{
namespace objects{
namespace events{

::io::newgrounds::objects::events::TypedResultType TypedResultType_obj::Error(::String error)
{
	return ::hx::CreateEnum< TypedResultType_obj >(HX_("Error",a8,3b,57,06),0,1)->_hx_init(0,error);
}

::io::newgrounds::objects::events::TypedResultType TypedResultType_obj::Success( ::Dynamic value)
{
	return ::hx::CreateEnum< TypedResultType_obj >(HX_("Success",a3,4d,9f,85),1,1)->_hx_init(0,value);
}

bool TypedResultType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Error",a8,3b,57,06)) { outValue = TypedResultType_obj::Error_dyn(); return true; }
	if (inName==HX_("Success",a3,4d,9f,85)) { outValue = TypedResultType_obj::Success_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TypedResultType_obj)

int TypedResultType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Error",a8,3b,57,06)) return 0;
	if (inName==HX_("Success",a3,4d,9f,85)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedResultType_obj,Error,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedResultType_obj,Success,return)

int TypedResultType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Error",a8,3b,57,06)) return 1;
	if (inName==HX_("Success",a3,4d,9f,85)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val TypedResultType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Error",a8,3b,57,06)) return Error_dyn();
	if (inName==HX_("Success",a3,4d,9f,85)) return Success_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TypedResultType_obj_sStaticFields[] = {
	HX_("Error",a8,3b,57,06),
	HX_("Success",a3,4d,9f,85),
	::String(null())
};

::hx::Class TypedResultType_obj::__mClass;

Dynamic __Create_TypedResultType_obj() { return new TypedResultType_obj; }

void TypedResultType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("io.newgrounds.objects.events.TypedResultType",20,c4,8b,41), ::hx::TCanCast< TypedResultType_obj >,TypedResultType_obj_sStaticFields,0,
	&__Create_TypedResultType_obj, &__Create,
	&super::__SGetClass(), &CreateTypedResultType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TypedResultType_obj::__GetStatic;
}

void TypedResultType_obj::__boot()
{
}


} // end namespace io
} // end namespace newgrounds
} // end namespace objects
} // end namespace events
