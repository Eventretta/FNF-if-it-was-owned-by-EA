#include <hxcpp.h>

#ifndef INCLUDED_EAPayBox
#include <EAPayBox.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1a1efdc89e3a7e39_27_new,"EAPayBox","new",0xcf9edf71,"EAPayBox.new","EAPayBox.hx",27,0x6a8b991f)
HX_DEFINE_STACK_FRAME(_hx_pos_1a1efdc89e3a7e39_41_new,"EAPayBox","new",0xcf9edf71,"EAPayBox.new","EAPayBox.hx",41,0x6a8b991f)
HX_DEFINE_STACK_FRAME(_hx_pos_1a1efdc89e3a7e39_9_new,"EAPayBox","new",0xcf9edf71,"EAPayBox.new","EAPayBox.hx",9,0x6a8b991f)

void EAPayBox_obj::__construct(int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::EAPayBox,_gthis, ::Dynamic,declineCallback, ::MusicBeatState,instance) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1a1efdc89e3a7e39_27_new)
HXLINE(  28)			{
HXLINE(  28)				int _g = 0;
HXDLIN(  28)				::Array< ::Dynamic> _g1 = _gthis->sprites;
HXDLIN(  28)				while((_g < _g1->length)){
HXLINE(  28)					 ::flixel::FlxObject i = _g1->__get(_g).StaticCast<  ::flixel::FlxObject >();
HXDLIN(  28)					_g = (_g + 1);
HXLINE(  30)					instance->remove(i,null()).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
HXLINE(  32)			if (::hx::IsNotNull( declineCallback )) {
HXLINE(  34)				declineCallback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::EAPayBox,_gthis, ::MusicBeatState,instance, ::Dynamic,acceptCallback) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1a1efdc89e3a7e39_41_new)
HXLINE(  42)			{
HXLINE(  42)				int _g = 0;
HXDLIN(  42)				::Array< ::Dynamic> _g1 = _gthis->sprites;
HXDLIN(  42)				while((_g < _g1->length)){
HXLINE(  42)					 ::flixel::FlxObject i = _g1->__get(_g).StaticCast<  ::flixel::FlxObject >();
HXDLIN(  42)					_g = (_g + 1);
HXLINE(  44)					instance->remove(i,null()).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
HXLINE(  46)			if (::hx::IsNotNull( acceptCallback )) {
HXLINE(  48)				acceptCallback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("test",52,c8,f9,4c);
            	HX_GC_STACKFRAME(&_hx_pos_1a1efdc89e3a7e39_9_new)
HXLINE(  11)		this->sprites = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		 ::EAPayBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		 ::flixel::FlxSprite box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,genX,genY,null());
HXLINE(  17)		box->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("eaStuff/box",34,82,09,a7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  18)		box->scrollFactor->set(null(),null());
HXLINE(  19)		this->sprites->push(box);
HXLINE(  20)		instance->add(box).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  22)		 ::flixel::text::FlxText text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(genX + 10),(genY + 100),null(),message,null(),null());
HXLINE(  23)		text->scrollFactor->set(null(),null());
HXLINE(  24)		this->sprites->push(text);
HXLINE(  25)		instance->add(text).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  27)		 ::flixel::ui::FlxButton button =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(genX + 50),(genY + 600),(HX_("$",24,00,00,00) + costDecline), ::Dynamic(new _hx_Closure_0(_gthis,declineCallback,instance)));
HXLINE(  37)		button->scrollFactor->set(null(),null());
HXLINE(  38)		this->sprites->push(button);
HXLINE(  39)		instance->add(button).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  41)		 ::flixel::ui::FlxButton button1 =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(genX + 200),(genY + 600),(HX_("$",24,00,00,00) + costAccept), ::Dynamic(new _hx_Closure_1(_gthis,instance,acceptCallback)));
HXLINE(  51)		button1->scrollFactor->set(null(),null());
HXLINE(  52)		this->sprites->push(button1);
HXLINE(  53)		instance->add(button1).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  55)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  56)		instance->persistentUpdate = false;
            	}

Dynamic EAPayBox_obj::__CreateEmpty() { return new EAPayBox_obj; }

void *EAPayBox_obj::_hx_vtable = 0;

Dynamic EAPayBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EAPayBox_obj > _hx_result = new EAPayBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool EAPayBox_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bb545bf;
}


::hx::ObjectPtr< EAPayBox_obj > EAPayBox_obj::__new(int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback) {
	::hx::ObjectPtr< EAPayBox_obj > __this = new EAPayBox_obj();
	__this->__construct(genX,genY,instance,__o_message,costAccept,costDecline,acceptCallback,declineCallback);
	return __this;
}

::hx::ObjectPtr< EAPayBox_obj > EAPayBox_obj::__alloc(::hx::Ctx *_hx_ctx,int genX,int genY, ::MusicBeatState instance,::String __o_message,int costAccept,int costDecline, ::Dynamic acceptCallback, ::Dynamic declineCallback) {
	EAPayBox_obj *__this = (EAPayBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EAPayBox_obj), true, "EAPayBox"));
	*(void **)__this = EAPayBox_obj::_hx_vtable;
	__this->__construct(genX,genY,instance,__o_message,costAccept,costDecline,acceptCallback,declineCallback);
	return __this;
}

EAPayBox_obj::EAPayBox_obj()
{
}

void EAPayBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EAPayBox);
	HX_MARK_MEMBER_NAME(sprites,"sprites");
	HX_MARK_END_CLASS();
}

void EAPayBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprites,"sprites");
}

::hx::Val EAPayBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { return ::hx::Val( sprites ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EAPayBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { sprites=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EAPayBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprites",ce,a8,8a,5f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EAPayBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(EAPayBox_obj,sprites),HX_("sprites",ce,a8,8a,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EAPayBox_obj_sStaticStorageInfo = 0;
#endif

static ::String EAPayBox_obj_sMemberFields[] = {
	HX_("sprites",ce,a8,8a,5f),
	::String(null()) };

::hx::Class EAPayBox_obj::__mClass;

void EAPayBox_obj::__register()
{
	EAPayBox_obj _hx_dummy;
	EAPayBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EAPayBox",ff,52,24,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EAPayBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EAPayBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EAPayBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EAPayBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

