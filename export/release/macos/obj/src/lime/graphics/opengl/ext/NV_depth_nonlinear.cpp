#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_depth_nonlinear
#include <lime/graphics/opengl/ext/NV_depth_nonlinear.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_651bef4d6f261626_6_new,"lime.graphics.opengl.ext.NV_depth_nonlinear","new",0x7b262493,"lime.graphics.opengl.ext.NV_depth_nonlinear.new","lime/graphics/opengl/ext/NV_depth_nonlinear.hx",6,0x26a3765b)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_depth_nonlinear_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_651bef4d6f261626_6_new)
HXDLIN(   6)		this->DEPTH_COMPONENT16_NONLINEAR_NV = 36396;
            	}

Dynamic NV_depth_nonlinear_obj::__CreateEmpty() { return new NV_depth_nonlinear_obj; }

void *NV_depth_nonlinear_obj::_hx_vtable = 0;

Dynamic NV_depth_nonlinear_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NV_depth_nonlinear_obj > _hx_result = new NV_depth_nonlinear_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_depth_nonlinear_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6dd9c98d;
}


NV_depth_nonlinear_obj::NV_depth_nonlinear_obj()
{
}

::hx::Val NV_depth_nonlinear_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_NONLINEAR_NV") ) { return ::hx::Val( DEPTH_COMPONENT16_NONLINEAR_NV ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NV_depth_nonlinear_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 30:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_NONLINEAR_NV") ) { DEPTH_COMPONENT16_NONLINEAR_NV=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NV_depth_nonlinear_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEPTH_COMPONENT16_NONLINEAR_NV",0e,06,97,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NV_depth_nonlinear_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(NV_depth_nonlinear_obj,DEPTH_COMPONENT16_NONLINEAR_NV),HX_("DEPTH_COMPONENT16_NONLINEAR_NV",0e,06,97,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NV_depth_nonlinear_obj_sStaticStorageInfo = 0;
#endif

static ::String NV_depth_nonlinear_obj_sMemberFields[] = {
	HX_("DEPTH_COMPONENT16_NONLINEAR_NV",0e,06,97,da),
	::String(null()) };

::hx::Class NV_depth_nonlinear_obj::__mClass;

void NV_depth_nonlinear_obj::__register()
{
	NV_depth_nonlinear_obj _hx_dummy;
	NV_depth_nonlinear_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.NV_depth_nonlinear",21,df,55,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NV_depth_nonlinear_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NV_depth_nonlinear_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_depth_nonlinear_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_depth_nonlinear_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
