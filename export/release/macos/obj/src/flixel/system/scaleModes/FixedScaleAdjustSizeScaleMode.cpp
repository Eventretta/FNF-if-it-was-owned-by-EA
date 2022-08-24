#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_FixedScaleAdjustSizeScaleMode
#include <flixel/system/scaleModes/FixedScaleAdjustSizeScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_380cdfe4582b6a57_5_new,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode","new",0x7933cd9e,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode.new","flixel/system/scaleModes/FixedScaleAdjustSizeScaleMode.hx",5,0x4b21f573)
HX_LOCAL_STACK_FRAME(_hx_pos_380cdfe4582b6a57_20_onMeasure,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode","onMeasure",0xc74333bd,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode.onMeasure","flixel/system/scaleModes/FixedScaleAdjustSizeScaleMode.hx",20,0x4b21f573)
HX_LOCAL_STACK_FRAME(_hx_pos_380cdfe4582b6a57_31_updateGameSize,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode","updateGameSize",0x0ed7447e,"flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode.updateGameSize","flixel/system/scaleModes/FixedScaleAdjustSizeScaleMode.hx",31,0x4b21f573)
namespace flixel{
namespace _hx_system{
namespace scaleModes{

void FixedScaleAdjustSizeScaleMode_obj::__construct(::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight){
            		bool fixedWidth = __o_fixedWidth.Default(false);
            		bool fixedHeight = __o_fixedHeight.Default(false);
            	HX_STACKFRAME(&_hx_pos_380cdfe4582b6a57_5_new)
HXLINE(   8)		this->fixedHeight = false;
HXLINE(   7)		this->fixedWidth = false;
HXLINE(  12)		super::__construct();
HXLINE(  13)		this->fixedWidth = fixedWidth;
HXLINE(  14)		this->fixedHeight = fixedHeight;
HXLINE(  16)		this->gameSize->set((( (Float)(::flixel::FlxG_obj::width) ) * ::flixel::FlxG_obj::initialZoom),(( (Float)(::flixel::FlxG_obj::height) ) * ::flixel::FlxG_obj::initialZoom));
            	}

Dynamic FixedScaleAdjustSizeScaleMode_obj::__CreateEmpty() { return new FixedScaleAdjustSizeScaleMode_obj; }

void *FixedScaleAdjustSizeScaleMode_obj::_hx_vtable = 0;

Dynamic FixedScaleAdjustSizeScaleMode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > _hx_result = new FixedScaleAdjustSizeScaleMode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FixedScaleAdjustSizeScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01f096b2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01f096b2;
	} else {
		return inClassId==(int)0x5671ae2b;
	}
}

void FixedScaleAdjustSizeScaleMode_obj::onMeasure(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_380cdfe4582b6a57_20_onMeasure)
HXLINE(  21)		int _hx_tmp;
HXDLIN(  21)		if (this->fixedWidth) {
HXLINE(  21)			_hx_tmp = ::flixel::FlxG_obj::initialWidth;
            		}
            		else {
HXLINE(  21)			_hx_tmp = ::Math_obj::ceil((( (Float)(Width) ) / ::flixel::FlxG_obj::initialZoom));
            		}
HXDLIN(  21)		::flixel::FlxG_obj::width = _hx_tmp;
HXLINE(  22)		int _hx_tmp1;
HXDLIN(  22)		if (this->fixedHeight) {
HXLINE(  22)			_hx_tmp1 = ::flixel::FlxG_obj::initialHeight;
            		}
            		else {
HXLINE(  22)			_hx_tmp1 = ::Math_obj::ceil((( (Float)(Height) ) / ::flixel::FlxG_obj::initialZoom));
            		}
HXDLIN(  22)		::flixel::FlxG_obj::height = _hx_tmp1;
HXLINE(  24)		this->updateGameSize(Width,Height);
HXLINE(  25)		this->updateDeviceSize(Width,Height);
HXLINE(  26)		this->updateScaleOffset();
HXLINE(  27)		this->updateGamePosition();
            	}


void FixedScaleAdjustSizeScaleMode_obj::updateGameSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_380cdfe4582b6a57_31_updateGameSize)
HXLINE(  32)		this->gameSize->set_x((( (Float)(::flixel::FlxG_obj::width) ) * ::flixel::FlxG_obj::initialZoom));
HXLINE(  33)		this->gameSize->set_y((( (Float)(::flixel::FlxG_obj::height) ) * ::flixel::FlxG_obj::initialZoom));
HXLINE(  35)		if (::hx::IsNotNull( ::flixel::FlxG_obj::camera )) {
HXLINE(  37)			Float oldWidth = ( (Float)(::flixel::FlxG_obj::camera->width) );
HXLINE(  38)			Float oldHeight = ( (Float)(::flixel::FlxG_obj::camera->height) );
HXLINE(  40)			{
HXLINE(  40)				 ::flixel::FlxCamera _this = ::flixel::FlxG_obj::camera;
HXDLIN(  40)				int Height = ::flixel::FlxG_obj::height;
HXDLIN(  40)				_this->set_width(::flixel::FlxG_obj::width);
HXDLIN(  40)				_this->set_height(Height);
            			}
HXLINE(  41)			 ::flixel::math::FlxPoint fh = ::flixel::FlxG_obj::camera->scroll;
HXDLIN(  41)			fh->set_x((fh->x + (((Float)0.5) * (oldWidth - ( (Float)(::flixel::FlxG_obj::width) )))));
HXLINE(  42)			 ::flixel::math::FlxPoint fh1 = ::flixel::FlxG_obj::camera->scroll;
HXDLIN(  42)			fh1->set_y((fh1->y + (((Float)0.5) * (oldHeight - ( (Float)(::flixel::FlxG_obj::height) )))));
            		}
            	}



::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > FixedScaleAdjustSizeScaleMode_obj::__new(::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight) {
	::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > __this = new FixedScaleAdjustSizeScaleMode_obj();
	__this->__construct(__o_fixedWidth,__o_fixedHeight);
	return __this;
}

::hx::ObjectPtr< FixedScaleAdjustSizeScaleMode_obj > FixedScaleAdjustSizeScaleMode_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_fixedWidth,::hx::Null< bool >  __o_fixedHeight) {
	FixedScaleAdjustSizeScaleMode_obj *__this = (FixedScaleAdjustSizeScaleMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FixedScaleAdjustSizeScaleMode_obj), true, "flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode"));
	*(void **)__this = FixedScaleAdjustSizeScaleMode_obj::_hx_vtable;
	__this->__construct(__o_fixedWidth,__o_fixedHeight);
	return __this;
}

FixedScaleAdjustSizeScaleMode_obj::FixedScaleAdjustSizeScaleMode_obj()
{
}

::hx::Val FixedScaleAdjustSizeScaleMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return ::hx::Val( onMeasure_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { return ::hx::Val( fixedWidth ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixedHeight") ) { return ::hx::Val( fixedHeight ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return ::hx::Val( updateGameSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FixedScaleAdjustSizeScaleMode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fixedWidth") ) { fixedWidth=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixedHeight") ) { fixedHeight=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FixedScaleAdjustSizeScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fixedWidth",f2,67,8d,b3));
	outFields->push(HX_("fixedHeight",7b,04,7d,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FixedScaleAdjustSizeScaleMode_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FixedScaleAdjustSizeScaleMode_obj,fixedWidth),HX_("fixedWidth",f2,67,8d,b3)},
	{::hx::fsBool,(int)offsetof(FixedScaleAdjustSizeScaleMode_obj,fixedHeight),HX_("fixedHeight",7b,04,7d,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FixedScaleAdjustSizeScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String FixedScaleAdjustSizeScaleMode_obj_sMemberFields[] = {
	HX_("fixedWidth",f2,67,8d,b3),
	HX_("fixedHeight",7b,04,7d,1e),
	HX_("onMeasure",ff,b3,94,14),
	HX_("updateGameSize",fc,94,a3,ed),
	::String(null()) };

::hx::Class FixedScaleAdjustSizeScaleMode_obj::__mClass;

void FixedScaleAdjustSizeScaleMode_obj::__register()
{
	FixedScaleAdjustSizeScaleMode_obj _hx_dummy;
	FixedScaleAdjustSizeScaleMode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.scaleModes.FixedScaleAdjustSizeScaleMode",ac,66,e1,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FixedScaleAdjustSizeScaleMode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FixedScaleAdjustSizeScaleMode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FixedScaleAdjustSizeScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FixedScaleAdjustSizeScaleMode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
