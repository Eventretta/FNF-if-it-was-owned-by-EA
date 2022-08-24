#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Replay
#include <Replay.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ae35d7392f0592b_36_new,"Replay","new",0xf50eabb9,"Replay.new","Replay.hx",36,0xac25edd7)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae35d7392f0592b_67_SaveReplay,"Replay","SaveReplay",0xc69ca82b,"Replay.SaveReplay","Replay.hx",67,0xac25edd7)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae35d7392f0592b_86_LoadFromJSON,"Replay","LoadFromJSON",0x580c567f,"Replay.LoadFromJSON","Replay.hx",86,0xac25edd7)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae35d7392f0592b_56_LoadReplay,"Replay","LoadReplay",0x330e4bd4,"Replay.LoadReplay","Replay.hx",56,0xac25edd7)
HX_LOCAL_STACK_FRAME(_hx_pos_6ae35d7392f0592b_38_boot,"Replay","boot",0x6fe096b9,"Replay.boot","Replay.hx",38,0xac25edd7)

void Replay_obj::__construct(::String path){
            	HX_STACKFRAME(&_hx_pos_6ae35d7392f0592b_36_new)
HXLINE(  40)		this->path = HX_("",00,00,00,00);
HXLINE(  44)		this->path = path;
HXLINE(  50)		::String _hx_tmp = ::Replay_obj::version;
HXLINE(  45)		this->replay =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("timestamp",d6,d4,ce,a5),::Date_obj::now())
            			->setFixed(1,HX_("keyPresses",d2,72,6e,a8),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(2,HX_("keyReleases",8b,05,0c,bf),::Array_obj< ::Dynamic>::__new(0))
            			->setFixed(3,HX_("replayGameVer",2a,ad,0b,ce),_hx_tmp)
            			->setFixed(4,HX_("songDiff",7a,ba,41,30),1)
            			->setFixed(5,HX_("songName",c0,d0,d7,36),HX_("Tutorial",be,4b,67,5c)));
            	}

Dynamic Replay_obj::__CreateEmpty() { return new Replay_obj; }

void *Replay_obj::_hx_vtable = 0;

Dynamic Replay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Replay_obj > _hx_result = new Replay_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Replay_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02ae226b;
}

void Replay_obj::SaveReplay(){
            	HX_STACKFRAME(&_hx_pos_6ae35d7392f0592b_67_SaveReplay)
HXLINE(  69)		::String json = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE(  70)		int json1 = ::PlayState_obj::storyDifficulty;
HXLINE(  71)		::Array< ::Dynamic> json2 = ( (::Array< ::Dynamic>)(this->replay->__Field(HX_("keyPresses",d2,72,6e,a8),::hx::paccDynamic)) );
HXLINE(  72)		::Array< ::Dynamic> json3 = ( (::Array< ::Dynamic>)(this->replay->__Field(HX_("keyReleases",8b,05,0c,bf),::hx::paccDynamic)) );
HXLINE(  73)		 ::Date json4 = ::Date_obj::now();
HXLINE(  68)		 ::Dynamic json5 =  ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("timestamp",d6,d4,ce,a5),json4)
            			->setFixed(1,HX_("keyPresses",d2,72,6e,a8),json2)
            			->setFixed(2,HX_("keyReleases",8b,05,0c,bf),json3)
            			->setFixed(3,HX_("replayGameVer",2a,ad,0b,ce),::Replay_obj::version)
            			->setFixed(4,HX_("songDiff",7a,ba,41,30),json1)
            			->setFixed(5,HX_("songName",c0,d0,d7,36),json));
HXLINE(  77)		 ::Dynamic replacer = null();
HXDLIN(  77)		::String space = null();
HXDLIN(  77)		::String data = ::haxe::format::JsonPrinter_obj::print(json5,replacer,space);
HXLINE(  80)		::String _hx_tmp = ( (::String)(((HX_("assets/replays/replay-",77,41,6e,f6) + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) + HX_("-time",ba,e6,04,36))) );
HXDLIN(  80)		::sys::io::File_obj::saveContent(((_hx_tmp + ::Date_obj::now()->getTime()) + HX_(".kadeReplay",cc,f2,52,6f)),data);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Replay_obj,SaveReplay,(void))

void Replay_obj::LoadFromJSON(){
            	HX_GC_STACKFRAME(&_hx_pos_6ae35d7392f0592b_86_LoadFromJSON)
HXLINE(  88)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  88)		::String _hx_tmp1 = ((HX_("loading ",24,de,81,cb) + ::Sys_obj::getCwd()) + HX_("assets/replays/",8f,f9,e8,c5));
HXDLIN(  88)		_hx_tmp(((_hx_tmp1 + this->path) + HX_(" replay...",07,d7,a1,13)),::hx::SourceInfo(HX_("source/Replay.hx",63,60,45,5b),88,HX_("Replay",47,5b,16,3b),HX_("LoadFromJSON",f8,e4,96,25)));
HXLINE(  89)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  91)			::String text = (::Sys_obj::getCwd() + HX_("assets/replays/",8f,f9,e8,c5));
HXDLIN(  91)			 ::Dynamic repl =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent((text + this->path)))->doParse();
HXLINE(  92)			this->replay = repl;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  94)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  96)				{
HXLINE(  96)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  96)					::String _hx_tmp1 = (HX_("failed!\n",c6,8b,89,f9) + e->get_message());
HXDLIN(  96)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Replay.hx",63,60,45,5b),96,HX_("Replay",47,5b,16,3b),HX_("LoadFromJSON",f8,e4,96,25)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Replay_obj,LoadFromJSON,(void))

::String Replay_obj::version;

 ::Replay Replay_obj::LoadReplay(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_6ae35d7392f0592b_56_LoadReplay)
HXLINE(  57)		 ::Replay rep =  ::Replay_obj::__alloc( HX_CTX ,path);
HXLINE(  59)		rep->LoadFromJSON();
HXLINE(  61)		::haxe::Log_obj::trace( ::Dynamic((((((HX_("basic replay data:\nSong Name: ",1b,3e,84,fd) + rep->replay->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) + HX_("\nSong Diff: ",0c,b7,a7,7c)) + rep->replay->__Field(HX_("songDiff",7a,ba,41,30),::hx::paccDynamic)) + HX_("\nKeys Length: ",6e,fa,e6,9c)) + ( (::Array< ::Dynamic>)(rep->replay->__Field(HX_("keyPresses",d2,72,6e,a8),::hx::paccDynamic)) )->length)),::hx::SourceInfo(HX_("source/Replay.hx",63,60,45,5b),61,HX_("Replay",47,5b,16,3b),HX_("LoadReplay",0d,1a,5e,b2)));
HXLINE(  63)		return rep;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Replay_obj,LoadReplay,return )


::hx::ObjectPtr< Replay_obj > Replay_obj::__new(::String path) {
	::hx::ObjectPtr< Replay_obj > __this = new Replay_obj();
	__this->__construct(path);
	return __this;
}

::hx::ObjectPtr< Replay_obj > Replay_obj::__alloc(::hx::Ctx *_hx_ctx,::String path) {
	Replay_obj *__this = (Replay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Replay_obj), true, "Replay"));
	*(void **)__this = Replay_obj::_hx_vtable;
	__this->__construct(path);
	return __this;
}

Replay_obj::Replay_obj()
{
}

void Replay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Replay);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(replay,"replay");
	HX_MARK_END_CLASS();
}

void Replay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(replay,"replay");
}

::hx::Val Replay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"replay") ) { return ::hx::Val( replay ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SaveReplay") ) { return ::hx::Val( SaveReplay_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LoadFromJSON") ) { return ::hx::Val( LoadFromJSON_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Replay_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = ( version ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LoadReplay") ) { outValue = LoadReplay_dyn(); return true; }
	}
	return false;
}

::hx::Val Replay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"replay") ) { replay=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Replay_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Replay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("replay",27,e7,81,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Replay_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Replay_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Replay_obj,replay),HX_("replay",27,e7,81,06)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Replay_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Replay_obj::version,HX_("version",18,e7,f1,7c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Replay_obj_sMemberFields[] = {
	HX_("path",a5,e5,51,4a),
	HX_("replay",27,e7,81,06),
	HX_("SaveReplay",64,76,ec,45),
	HX_("LoadFromJSON",f8,e4,96,25),
	::String(null()) };

static void Replay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Replay_obj::version,"version");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Replay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Replay_obj::version,"version");
};

#endif

::hx::Class Replay_obj::__mClass;

static ::String Replay_obj_sStaticFields[] = {
	HX_("version",18,e7,f1,7c),
	HX_("LoadReplay",0d,1a,5e,b2),
	::String(null())
};

void Replay_obj::__register()
{
	Replay_obj _hx_dummy;
	Replay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Replay",47,5b,16,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Replay_obj::__GetStatic;
	__mClass->mSetStaticField = &Replay_obj::__SetStatic;
	__mClass->mMarkFunc = Replay_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Replay_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Replay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Replay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Replay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Replay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Replay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Replay_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6ae35d7392f0592b_38_boot)
HXDLIN(  38)		version = HX_("1.0",b3,56,25,00);
            	}
}

