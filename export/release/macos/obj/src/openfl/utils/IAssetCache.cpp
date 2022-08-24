#include <hxcpp.h>

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

namespace openfl{
namespace utils{


static ::String IAssetCache_obj_sMemberFields[] = {
	HX_("get_enabled",98,64,2b,04),
	HX_("set_enabled",a4,6b,98,0e),
	HX_("clear",8d,71,5b,48),
	HX_("getBitmapData",ef,11,33,90),
	HX_("getFont",85,0d,43,16),
	HX_("getSound",59,9c,a3,e0),
	HX_("hasBitmapData",b3,6d,17,4e),
	HX_("hasFont",49,7e,04,13),
	HX_("hasSound",15,d7,24,0d),
	HX_("removeBitmapData",1d,d3,69,ed),
	HX_("removeFont",33,98,df,c0),
	HX_("removeSound",eb,69,00,7f),
	HX_("setBitmapData",fb,f3,38,d5),
	HX_("setFont",91,9e,44,09),
	HX_("setSound",cd,f5,00,8f),
	::String(null()) };

::hx::Class IAssetCache_obj::__mClass;

void IAssetCache_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.IAssetCache",c0,09,3d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IAssetCache_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x8a5cf29a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
