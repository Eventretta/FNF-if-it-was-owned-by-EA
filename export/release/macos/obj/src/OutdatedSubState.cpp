#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OutdatedSubState
#include <OutdatedSubState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_badf7fe26ae152fc_10_new,"OutdatedSubState","new",0xf8fc7d4b,"OutdatedSubState.new","OutdatedSubState.hx",10,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_17_create,"OutdatedSubState","create",0xa86f5ef1,"OutdatedSubState.create","OutdatedSubState.hx",17,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_33_update,"OutdatedSubState","update",0xb3657dfe,"OutdatedSubState.update","OutdatedSubState.hx",33,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_12_boot,"OutdatedSubState","boot",0xdc0a24e7,"OutdatedSubState.boot","OutdatedSubState.hx",12,0x9d3df485)
HX_LOCAL_STACK_FRAME(_hx_pos_badf7fe26ae152fc_14_boot,"OutdatedSubState","boot",0xdc0a24e7,"OutdatedSubState.boot","OutdatedSubState.hx",14,0x9d3df485)

void OutdatedSubState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_10_new)
HXDLIN(  10)		super::__construct(TransIn,TransOut);
            	}

Dynamic OutdatedSubState_obj::__CreateEmpty() { return new OutdatedSubState_obj; }

void *OutdatedSubState_obj::_hx_vtable = 0;

Dynamic OutdatedSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutdatedSubState_obj > _hx_result = new OutdatedSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OutdatedSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f552e99 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OutdatedSubState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_badf7fe26ae152fc_17_create)
HXLINE(  18)		this->super::create();
HXLINE(  19)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  20)		this->add(bg);
HXLINE(  21)		 ::flixel::text::FlxText txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,((((HX_("Kade Engine is Outdated!\n",d2,41,62,b8) + ::MainMenuState_obj::kadeEngineVer) + HX_(" is your current version\nwhile the most recent version is ",98,53,3c,e5)) + ::OutdatedSubState_obj::needVer) + HX_("!\nPress Space to go to the github or ESCAPE to ignore this!!",65,be,3d,82)),32,null());
HXLINE(  27)		txt->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  28)		txt->screenCenter(null());
HXLINE(  29)		this->add(txt);
            	}


void OutdatedSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_badf7fe26ae152fc_33_update)
HXLINE(  34)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  36)			::String prefix = HX_("",00,00,00,00);
HXDLIN(  36)			if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(HX_("https://github.com/KadeDev/Kade-Engine/releases/latest",18,7a,81,55)))) {
HXLINE(  36)				prefix = HX_("http://",52,75,cd,5a);
            			}
HXDLIN(  36)			::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + HX_("https://github.com/KadeDev/Kade-Engine/releases/latest",18,7a,81,55))),HX_("_blank",95,26,d9,b0));
            		}
HXLINE(  38)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE(  40)			::OutdatedSubState_obj::leftState = true;
HXLINE(  41)			{
HXLINE(  41)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  41)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  41)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE(  43)		this->super::update(elapsed);
            	}


bool OutdatedSubState_obj::leftState;

::String OutdatedSubState_obj::needVer;


::hx::ObjectPtr< OutdatedSubState_obj > OutdatedSubState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OutdatedSubState_obj > __this = new OutdatedSubState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OutdatedSubState_obj > OutdatedSubState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OutdatedSubState_obj *__this = (OutdatedSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OutdatedSubState_obj), true, "OutdatedSubState"));
	*(void **)__this = OutdatedSubState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OutdatedSubState_obj::OutdatedSubState_obj()
{
}

::hx::Val OutdatedSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OutdatedSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { outValue = ( needVer ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

bool OutdatedSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { needVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutdatedSubState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo OutdatedSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OutdatedSubState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{::hx::fsString,(void *) &OutdatedSubState_obj::needVer,HX_("needVer",ad,ff,17,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OutdatedSubState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void OutdatedSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OutdatedSubState_obj::leftState,"leftState");
	HX_MARK_MEMBER_NAME(OutdatedSubState_obj::needVer,"needVer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OutdatedSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OutdatedSubState_obj::leftState,"leftState");
	HX_VISIT_MEMBER_NAME(OutdatedSubState_obj::needVer,"needVer");
};

#endif

::hx::Class OutdatedSubState_obj::__mClass;

static ::String OutdatedSubState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	HX_("needVer",ad,ff,17,aa),
	::String(null())
};

void OutdatedSubState_obj::__register()
{
	OutdatedSubState_obj _hx_dummy;
	OutdatedSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OutdatedSubState",d9,7b,73,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutdatedSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &OutdatedSubState_obj::__SetStatic;
	__mClass->mMarkFunc = OutdatedSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutdatedSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OutdatedSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OutdatedSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OutdatedSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutdatedSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutdatedSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OutdatedSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_12_boot)
HXDLIN(  12)		leftState = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_badf7fe26ae152fc_14_boot)
HXDLIN(  14)		needVer = HX_("IDFK LOL",29,9e,7f,9c);
            	}
}

