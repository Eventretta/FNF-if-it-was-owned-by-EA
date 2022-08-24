#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_io_newgrounds_Call
#include <io/newgrounds/Call.h>
#endif
#ifndef INCLUDED_io_newgrounds_ICallable
#include <io/newgrounds/ICallable.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_AppComponent
#include <io/newgrounds/components/AppComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_Component
#include <io/newgrounds/components/Component.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ComponentList
#include <io/newgrounds/components/ComponentList.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_MedalComponent
#include <io/newgrounds/components/MedalComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ScoreBoardComponent
#include <io/newgrounds/components/ScoreBoardComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Medal
#include <io/newgrounds/objects/Medal.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_ScoreBoard
#include <io/newgrounds/objects/ScoreBoard.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects__Session_Session_Impl_
#include <io/newgrounds/objects/_Session/Session_Impl_.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_events_ResultType
#include <io/newgrounds/objects/events/ResultType.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_Dispatcher
#include <io/newgrounds/utils/Dispatcher.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_RawSaveSlotList
#include <io/newgrounds/utils/RawSaveSlotList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45e56eda36fb0427_84_new,"io.newgrounds.NG","new",0xc59603a5,"io.newgrounds.NG.new","io/newgrounds/NG.hx",84,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_42_get_user,"io.newgrounds.NG","get_user",0x82ed206f,"io.newgrounds.NG.get_user","io/newgrounds/NG.hx",42,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_50_get_passportUrl,"io.newgrounds.NG","get_passportUrl",0xbc44cc19,"io.newgrounds.NG.get_passportUrl","io/newgrounds/NG.hx",50,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_146_checkInitialSession,"io.newgrounds.NG","checkInitialSession",0x5219cf5f,"io.newgrounds.NG.checkInitialSession","io/newgrounds/NG.hx",146,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_184_requestLogin,"io.newgrounds.NG","requestLogin",0x413747b5,"io.newgrounds.NG.requestLogin","io/newgrounds/NG.hx",184,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_165_requestLogin,"io.newgrounds.NG","requestLogin",0x413747b5,"io.newgrounds.NG.requestLogin","io/newgrounds/NG.hx",165,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_198_onSessionReceive,"io.newgrounds.NG","onSessionReceive",0xec6c1c47,"io.newgrounds.NG.onSessionReceive","io/newgrounds/NG.hx",198,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_218_onSessionReceive,"io.newgrounds.NG","onSessionReceive",0xec6c1c47,"io.newgrounds.NG.onSessionReceive","io/newgrounds/NG.hx",218,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_234_openPassportUrl,"io.newgrounds.NG","openPassportUrl",0x69b708d8,"io.newgrounds.NG.openPassportUrl","io/newgrounds/NG.hx",234,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_244_openPassportHelper,"io.newgrounds.NG","openPassportHelper",0x6ca027a5,"io.newgrounds.NG.openPassportHelper","io/newgrounds/NG.hx",244,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_275_onPassportUrlOpen,"io.newgrounds.NG","onPassportUrlOpen",0xefaf23cd,"io.newgrounds.NG.onPassportUrlOpen","io/newgrounds/NG.hx",275,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_280_dispatchPassportCallback,"io.newgrounds.NG","dispatchPassportCallback",0xa51e542c,"io.newgrounds.NG.dispatchPassportCallback","io/newgrounds/NG.hx",280,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_289_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",289,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_322_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",322,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_326_checkSession,"io.newgrounds.NG","checkSession",0xad908b89,"io.newgrounds.NG.checkSession","io/newgrounds/NG.hx",326,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_352_cancelLoginRequest,"io.newgrounds.NG","cancelLoginRequest",0xd58be7db,"io.newgrounds.NG.cancelLoginRequest","io/newgrounds/NG.hx",352,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_360_endLoginAndCall,"io.newgrounds.NG","endLoginAndCall",0x99dbe7ec,"io.newgrounds.NG.endLoginAndCall","io/newgrounds/NG.hx",360,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_369_logOut,"io.newgrounds.NG","logOut",0xafd21445,"io.newgrounds.NG.logOut","io/newgrounds/NG.hx",369,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_381_onLogOutSuccessful,"io.newgrounds.NG","onLogOutSuccessful",0xdb4ceafe,"io.newgrounds.NG.onLogOutSuccessful","io/newgrounds/NG.hx",381,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_392_requestMedals,"io.newgrounds.NG","requestMedals",0x717f4ed0,"io.newgrounds.NG.requestMedals","io/newgrounds/NG.hx",392,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_406_onMedalsReceived,"io.newgrounds.NG","onMedalsReceived",0x307eaaf7,"io.newgrounds.NG.onMedalsReceived","io/newgrounds/NG.hx",406,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_441_requestScoreBoards,"io.newgrounds.NG","requestScoreBoards",0x9337ab4b,"io.newgrounds.NG.requestScoreBoards","io/newgrounds/NG.hx",441,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_465_onBoardsReceived,"io.newgrounds.NG","onBoardsReceived",0x53c41468,"io.newgrounds.NG.onBoardsReceived","io/newgrounds/NG.hx",465,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_500_requestSaveSlots,"io.newgrounds.NG","requestSaveSlots",0x897fec84,"io.newgrounds.NG.requestSaveSlots","io/newgrounds/NG.hx",500,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_510_timer,"io.newgrounds.NG","timer",0x50df0e4a,"io.newgrounds.NG.timer","io/newgrounds/NG.hx",510,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_507_timer,"io.newgrounds.NG","timer",0x50df0e4a,"io.newgrounds.NG.timer","io/newgrounds/NG.hx",507,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_109_create,"io.newgrounds.NG","create",0xcf8accd7,"io.newgrounds.NG.create","io/newgrounds/NG.hx",109,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_128_createAndCheckSession,"io.newgrounds.NG","createAndCheckSession",0xe8acc1ce,"io.newgrounds.NG.createAndCheckSession","io/newgrounds/NG.hx",128,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_519_getHost,"io.newgrounds.NG","getHost",0xd01338e3,"io.newgrounds.NG.getHost","io/newgrounds/NG.hx",519,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_36_boot,"io.newgrounds.NG","boot",0x15c62d4d,"io.newgrounds.NG.boot","io/newgrounds/NG.hx",36,0x99d625cb)
HX_LOCAL_STACK_FRAME(_hx_pos_45e56eda36fb0427_517_boot,"io.newgrounds.NG","boot",0x15c62d4d,"io.newgrounds.NG.boot","io/newgrounds/NG.hx",517,0x99d625cb)
namespace io{
namespace newgrounds{

void NG_obj::__construct(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_84_new)
HXLINE(  86)		this->host = ::io::newgrounds::NG_obj::getHost();
HXLINE(  87)		this->onLogin =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  88)		this->onLogOut =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  89)		this->onMedalsLoaded =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  90)		this->onScoreBoardsLoaded =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  91)		this->onSaveSlotsLoaded =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
HXLINE(  93)		 ::io::newgrounds::utils::RawSaveSlotList this1 =  ::io::newgrounds::utils::RawSaveSlotList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXDLIN(  93)		this->saveSlots = this1;
HXLINE(  95)		this->attemptingLogin = ::hx::IsNotNull( sessionId );
HXLINE(  97)		super::__construct(appId,sessionId,debug,onSessionFail);
            	}

Dynamic NG_obj::__CreateEmpty() { return new NG_obj; }

void *NG_obj::_hx_vtable = 0;

Dynamic NG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NG_obj > _hx_result = new NG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62957ed3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62957ed3;
	} else {
		return inClassId==(int)0x7772213d;
	}
}

 ::Dynamic NG_obj::get_user(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_42_get_user)
HXLINE(  44)		if (::hx::IsNull( this->_session )) {
HXLINE(  45)			return null();
            		}
HXLINE(  47)		return this->_session->__Field(HX_("user",4b,92,ad,4d),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,get_user,return )

::String NG_obj::get_passportUrl(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_50_get_passportUrl)
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (::hx::IsNotNull( this->_session )) {
HXLINE(  52)			_hx_tmp = (::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) != HX_("request-login",ab,da,18,fe));
            		}
            		else {
HXLINE(  52)			_hx_tmp = true;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  53)			return null();
            		}
HXLINE(  55)		return ( (::String)(this->_session->__Field(HX_("passport_url",42,e6,1b,68),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,get_passportUrl,return )

void NG_obj::checkInitialSession( ::Dynamic failHandler, ::Dynamic response){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_146_checkInitialSession)
HXDLIN( 146)		this->onSessionReceive(response,null(),null(),failHandler,null());
            	}


void NG_obj::requestLogin( ::Dynamic onSuccess, ::Dynamic onPending, ::Dynamic onFail, ::Dynamic onCancel){
            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onFail1, ::Dynamic,onPending1, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1) HXARGC(1)
            		void _hx_run( ::Dynamic response){
            			HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_184_requestLogin)
HXLINE( 184)			_g(response,onSuccess1,onPending1,onFail1,onCancel1);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_165_requestLogin)
HXLINE( 167)		if (this->attemptingLogin) {
HXLINE( 169)			this->logError(HX_("cannot request another login until the previous attempt is complete",86,49,52,0c),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),169,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestLogin",9a,8b,c5,14)));
HXLINE( 170)			return;
            		}
HXLINE( 173)		if (this->loggedIn) {
HXLINE( 175)			this->logError(HX_("cannot log in, already logged in",89,90,59,9b),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),175,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestLogin",9a,8b,c5,14)));
HXLINE( 176)			return;
            		}
HXLINE( 179)		this->attemptingLogin = true;
HXLINE( 180)		this->_loginCancelled = false;
HXLINE( 181)		this->_passportCallback = null();
HXLINE( 184)		 ::Dynamic _g = this->onSessionReceive_dyn();
HXDLIN( 184)		 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 184)		 ::Dynamic onPending1 = onPending;
HXDLIN( 184)		 ::Dynamic onFail1 = onFail;
HXDLIN( 184)		 ::Dynamic onCancel1 = onCancel;
HXDLIN( 184)		 ::Dynamic call =  ::Dynamic(new _hx_Closure_0(onFail1,onPending1,onSuccess1,_g,onCancel1));
HXLINE( 183)		 ::io::newgrounds::Call call1 = this->calls->app->startSession(true)->addDataHandler(call);
HXLINE( 186)		if (::hx::IsNotNull( onFail )) {
HXLINE( 187)			call1->addErrorHandler(onFail);
            		}
HXLINE( 189)		call1->send();
            	}


HX_DEFINE_DYNAMIC_FUNC4(NG_obj,requestLogin,(void))

void NG_obj::onSessionReceive( ::Dynamic response, ::Dynamic onSuccess, ::Dynamic onPending, ::Dynamic onFail, ::Dynamic onCancel){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_198_onSessionReceive)
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 200)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 200)			_hx_tmp = true;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 202)			this->set_sessionId(null());
HXLINE( 203)			this->endLoginAndCall(null());
HXLINE( 205)			if (::hx::IsNotNull( onFail )) {
HXLINE( 206)				 ::Dynamic _hx_tmp;
HXDLIN( 206)				if (!(( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ))) {
HXLINE( 206)					_hx_tmp = response->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            				}
            				else {
HXLINE( 206)					_hx_tmp =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            				}
HXDLIN( 206)				onFail(_hx_tmp);
            			}
HXLINE( 208)			return;
            		}
HXLINE( 211)		this->_session =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("session",56,17,98,93),::hx::paccDynamic);
HXLINE( 212)		this->set_sessionId(( (::String)(this->_session->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ));
HXLINE( 214)		{
HXLINE( 214)			 ::Dynamic any = (HX_("session started - status: ",b4,cf,cd,a3) + ::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session));
HXDLIN( 214)			if (this->verbose) {
HXLINE( 214)				this->log(any,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),214,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onSessionReceive",ac,b6,9a,52)));
            			}
            		}
HXLINE( 216)		if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("request-login",ab,da,18,fe))) {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1, ::Dynamic,response) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_218_onSessionReceive)
HXLINE( 218)				_g(response,onSuccess1,onCancel1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 218)			 ::Dynamic _g = this->checkSession_dyn();
HXDLIN( 218)			 ::Dynamic response = null();
HXDLIN( 218)			 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 218)			 ::Dynamic onCancel1 = onCancel;
HXDLIN( 218)			this->_passportCallback =  ::Dynamic(new _hx_Closure_0(onSuccess1,_g,onCancel1,response));
HXLINE( 219)			if (::hx::IsNotNull( onPending )) {
HXLINE( 220)				onPending();
            			}
            			else {
HXLINE( 222)				this->openPassportUrl();
            			}
            		}
            		else {
HXLINE( 225)			this->checkSession(null(),onSuccess,onCancel);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(NG_obj,onSessionReceive,(void))

void NG_obj::openPassportUrl(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_234_openPassportUrl)
HXDLIN( 234)		if (::hx::IsNotNull( this->get_passportUrl() )) {
HXLINE( 236)			{
HXLINE( 236)				 ::Dynamic any = (HX_("loading passport: ",1c,a3,0a,02) + this->get_passportUrl());
HXDLIN( 236)				if (this->verbose) {
HXLINE( 236)					this->log(any,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),236,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("openPassportUrl",13,82,92,a3)));
            				}
            			}
HXLINE( 237)			this->openPassportHelper(this->get_passportUrl());
HXLINE( 238)			this->dispatchPassportCallback();
            		}
            		else {
HXLINE( 241)			this->logError(HX_("Cannot open passport",2b,3e,e4,33),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),241,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("openPassportUrl",13,82,92,a3)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,openPassportUrl,(void))

void NG_obj::openPassportHelper(::String url){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_244_openPassportHelper)
HXLINE( 245)		::String window = HX_("_blank",95,26,d9,b0);
HXLINE( 258)		{
HXLINE( 258)			::String _g = ::Sys_obj::systemName();
HXDLIN( 258)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("Linux",d4,5b,2f,08)) ){
HXLINE( 261)				::Sys_obj::command((HX_("xdg-open ",04,1e,df,25) + url),null());
HXDLIN( 261)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("Mac",6f,c2,3a,00)) ){
HXLINE( 262)				::Sys_obj::command((HX_("open ",16,4d,cf,33) + url),null());
HXDLIN( 262)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("Windows",63,06,c6,b5)) ){
HXLINE( 260)				::Sys_obj::command((HX_("start ",7e,61,fa,05) + url),null());
HXDLIN( 260)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 263)				::String name = _g;
HXDLIN( 263)				this->logError((HX_("Unhandled systemName: ",dd,0d,95,2a) + name),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),263,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("openPassportHelper",4a,e5,75,af)));
            			}
            			_hx_goto_9:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,openPassportHelper,(void))

void NG_obj::onPassportUrlOpen(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_275_onPassportUrlOpen)
HXDLIN( 275)		this->dispatchPassportCallback();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,onPassportUrlOpen,(void))

void NG_obj::dispatchPassportCallback(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_280_dispatchPassportCallback)
HXDLIN( 280)		if (::hx::IsNotNull( this->_passportCallback )) {
HXLINE( 282)			if (this->verbose) {
HXLINE( 282)				this->log(HX_("dispatching passport callback",1b,2f,ca,c5),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),282,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("dispatchPassportCallback",91,5b,b5,5b)));
            			}
HXLINE( 283)			 ::Dynamic callback = this->_passportCallback;
HXLINE( 284)			this->_passportCallback = null();
HXLINE( 285)			callback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,dispatchPassportCallback,(void))

void NG_obj::checkSession( ::Dynamic response, ::Dynamic onSuccess, ::Dynamic onCancel){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_289_checkSession)
HXDLIN( 289)		 ::io::newgrounds::NG _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 291)		if (this->_loginCancelled) {
HXLINE( 293)			this->log(HX_("login cancelled via cancelLoginRequest",d8,42,ea,fc),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),293,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 295)			this->endLoginAndCall(onCancel);
HXLINE( 296)			return;
            		}
HXLINE( 299)		if (::hx::IsNotNull( response )) {
HXLINE( 301)			bool _hx_tmp;
HXDLIN( 301)			if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 301)				_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            			}
            			else {
HXLINE( 301)				_hx_tmp = true;
            			}
HXDLIN( 301)			if (_hx_tmp) {
HXLINE( 303)				this->log(HX_("login cancelled via passport",2a,a4,ee,75),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),303,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 305)				this->endLoginAndCall(onCancel);
HXLINE( 306)				return;
            			}
HXLINE( 309)			if (this->verbose) {
HXLINE( 309)				this->log(HX_("Session received",4b,8f,56,de),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),309,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
            			}
HXLINE( 310)			this->_session =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("session",56,17,98,93),::hx::paccDynamic);
            		}
HXLINE( 313)		if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("user-loaded",07,45,85,a0))) {
HXLINE( 315)			this->loggedIn = true;
HXLINE( 316)			this->endLoginAndCall(onSuccess);
HXLINE( 317)			this->onLogin->dispatch();
            		}
            		else {
HXLINE( 319)			if ((::io::newgrounds::objects::_Session::Session_Impl__obj::get_status(this->_session) == HX_("request-login",ab,da,18,fe))) {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onSuccess1, ::Dynamic,_g, ::Dynamic,onCancel1) HXARGC(1)
            				void _hx_run( ::Dynamic response){
            					HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_322_checkSession)
HXLINE( 322)					_g(response,onSuccess1,onCancel1);
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,onCancel, ::io::newgrounds::NG,_gthis, ::io::newgrounds::Call,call1) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_326_checkSession)
HXLINE( 328)					if (_gthis->verbose) {
HXLINE( 328)						_gthis->log(HX_("3s elapsed, checking session again",00,1e,ea,af),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),328,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
            					}
HXLINE( 331)					if (!(_gthis->_loginCancelled)) {
HXLINE( 332)						call1->send();
            					}
            					else {
HXLINE( 335)						_gthis->log(HX_("login cancelled via cancelLoginRequest",d8,42,ea,fc),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),335,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 336)						_gthis->endLoginAndCall(onCancel);
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 322)				 ::Dynamic _g = this->checkSession_dyn();
HXDLIN( 322)				 ::Dynamic onSuccess1 = onSuccess;
HXDLIN( 322)				 ::Dynamic onCancel1 = onCancel;
HXDLIN( 322)				 ::Dynamic call =  ::Dynamic(new _hx_Closure_0(onSuccess1,_g,onCancel1));
HXLINE( 321)				 ::io::newgrounds::Call call1 = this->calls->app->checkSession()->addDataHandler(call);
HXLINE( 325)				this->timer(((Float)3.0), ::Dynamic(new _hx_Closure_1(onCancel,_gthis,call1)));
            			}
            			else {
HXLINE( 343)				this->log(HX_("login cancelled via passport",2a,a4,ee,75),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),343,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("checkSession",6e,cf,1e,81)));
HXLINE( 346)				this->endLoginAndCall(onCancel);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(NG_obj,checkSession,(void))

void NG_obj::cancelLoginRequest(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_352_cancelLoginRequest)
HXDLIN( 352)		if (this->attemptingLogin) {
HXLINE( 354)			this->_loginCancelled = true;
HXLINE( 356)			this->dispatchPassportCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,cancelLoginRequest,(void))

void NG_obj::endLoginAndCall( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_360_endLoginAndCall)
HXLINE( 362)		this->attemptingLogin = false;
HXLINE( 363)		this->_loginCancelled = false;
HXLINE( 365)		if (::hx::IsNotNull( callback )) {
HXLINE( 366)			callback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,endLoginAndCall,(void))

void NG_obj::logOut( ::Dynamic onComplete){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_369_logOut)
HXLINE( 371)		 ::io::newgrounds::Call call = this->calls->app->endSession()->addSuccessHandler(this->onLogOutSuccessful_dyn());
HXLINE( 374)		if (::hx::IsNotNull( onComplete )) {
HXLINE( 375)			call->addSuccessHandler(onComplete);
            		}
HXLINE( 377)		call->addSuccessHandler(this->onLogOut->dispatch_dyn())->send();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,logOut,(void))

void NG_obj::onLogOutSuccessful(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_381_onLogOutSuccessful)
HXLINE( 383)		this->_session = null();
HXLINE( 384)		this->set_sessionId(null());
HXLINE( 385)		this->loggedIn = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NG_obj,onLogOutSuccessful,(void))

void NG_obj::requestMedals( ::Dynamic onSuccess, ::Dynamic onFail){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_392_requestMedals)
HXLINE( 394)		 ::io::newgrounds::Call call = this->calls->medal->getList()->addDataHandler(this->onMedalsReceived_dyn());
HXLINE( 397)		if (::hx::IsNotNull( onSuccess )) {
HXLINE( 398)			call->addSuccessHandler(onSuccess);
            		}
HXLINE( 400)		if (::hx::IsNotNull( onFail )) {
HXLINE( 401)			call->addErrorHandler(onFail);
            		}
HXLINE( 403)		call->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,requestMedals,(void))

void NG_obj::onMedalsReceived( ::Dynamic response){
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_406_onMedalsReceived)
HXLINE( 408)		bool _hx_tmp;
HXDLIN( 408)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 408)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 408)			_hx_tmp = true;
            		}
HXDLIN( 408)		if (_hx_tmp) {
HXLINE( 409)			return;
            		}
HXLINE( 411)		::Array< int > idList = ::Array_obj< int >::__new();
HXLINE( 413)		if (::hx::IsNull( this->medals )) {
HXLINE( 415)			this->medals =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 417)			{
HXLINE( 417)				int _g = 0;
HXDLIN( 417)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) );
HXDLIN( 417)				while((_g < _g1->length)){
HXLINE( 417)					 ::Dynamic medalData = _g1->__get(_g);
HXDLIN( 417)					_g = (_g + 1);
HXLINE( 419)					 ::io::newgrounds::objects::Medal medal =  ::io::newgrounds::objects::Medal_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),medalData);
HXLINE( 420)					this->medals->set(( (int)(medal->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),medal);
HXLINE( 421)					idList->push( ::Dynamic(medal->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            				}
            			}
            		}
            		else {
HXLINE( 425)			int _g = 0;
HXDLIN( 425)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) );
HXDLIN( 425)			while((_g < _g1->length)){
HXLINE( 425)				 ::Dynamic medalData = _g1->__get(_g);
HXDLIN( 425)				_g = (_g + 1);
HXLINE( 427)				( ( ::io::newgrounds::objects::Medal)(this->medals->get( ::Dynamic(medalData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))) )->parse(medalData);
HXLINE( 428)				idList->push( ::Dynamic(medalData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            			}
            		}
HXLINE( 432)		{
HXLINE( 432)			::String any = ((HX_("",00,00,00,00) + ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("medals",9c,3a,c2,fe),::hx::paccDynamic)) )->length) + HX_(" Medals received [",60,82,7d,de));
HXDLIN( 432)			 ::Dynamic any1 = ((any + idList->join(HX_(", ",74,26,00,00))) + HX_("]",5d,00,00,00));
HXDLIN( 432)			if (this->verbose) {
HXLINE( 432)				this->log(any1,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),432,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onMedalsReceived",5c,45,ad,96)));
            			}
            		}
HXLINE( 434)		this->onMedalsLoaded->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,onMedalsReceived,(void))

void NG_obj::requestScoreBoards( ::Dynamic onSuccess, ::Dynamic onFail){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_441_requestScoreBoards)
HXLINE( 443)		if (::hx::IsNotNull( this->scoreBoards )) {
HXLINE( 445)			this->log(HX_("aborting scoreboard request, all scoreboards are loaded",76,36,16,7e),::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),445,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("requestScoreBoards",f0,68,0d,d6)));
HXLINE( 447)			if (::hx::IsNotNull( onSuccess )) {
HXLINE( 448)				onSuccess();
            			}
HXLINE( 450)			return;
            		}
HXLINE( 453)		 ::io::newgrounds::Call call = this->calls->scoreBoard->getBoards()->addDataHandler(this->onBoardsReceived_dyn());
HXLINE( 456)		if (::hx::IsNotNull( onSuccess )) {
HXLINE( 457)			call->addSuccessHandler(onSuccess);
            		}
HXLINE( 459)		if (::hx::IsNotNull( onFail )) {
HXLINE( 460)			call->addErrorHandler(onFail);
            		}
HXLINE( 462)		call->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,requestScoreBoards,(void))

void NG_obj::onBoardsReceived( ::Dynamic response){
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_465_onBoardsReceived)
HXLINE( 467)		bool _hx_tmp;
HXDLIN( 467)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 467)			_hx_tmp = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXLINE( 467)			_hx_tmp = true;
            		}
HXDLIN( 467)		if (_hx_tmp) {
HXLINE( 468)			return;
            		}
HXLINE( 470)		::Array< int > idList = ::Array_obj< int >::__new();
HXLINE( 472)		if (::hx::IsNull( this->scoreBoards )) {
HXLINE( 474)			this->scoreBoards =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 476)			{
HXLINE( 476)				int _g = 0;
HXDLIN( 476)				::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("scoreboards",df,07,ba,f0),::hx::paccDynamic)) );
HXDLIN( 476)				while((_g < _g1->length)){
HXLINE( 476)					 ::Dynamic boardData = _g1->__get(_g);
HXDLIN( 476)					_g = (_g + 1);
HXLINE( 478)					 ::io::newgrounds::objects::ScoreBoard board =  ::io::newgrounds::objects::ScoreBoard_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),boardData);
HXLINE( 479)					this->scoreBoards->set(( (int)(board->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ),board);
HXLINE( 480)					idList->push( ::Dynamic(board->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)));
            				}
            			}
            		}
HXLINE( 484)		{
HXLINE( 484)			::String any = ((HX_("",00,00,00,00) + ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("scoreboards",df,07,ba,f0),::hx::paccDynamic)) )->length) + HX_(" ScoreBoards received [",5d,76,da,01));
HXDLIN( 484)			 ::Dynamic any1 = ((any + idList->join(HX_(", ",74,26,00,00))) + HX_("]",5d,00,00,00));
HXDLIN( 484)			if (this->verbose) {
HXLINE( 484)				this->log(any1,::hx::SourceInfo(HX_("io/newgrounds/NG.hx",cb,25,d6,99),484,HX_("io.newgrounds.NG",33,4d,c0,0e),HX_("onBoardsReceived",cd,ae,f2,b9)));
            			}
            		}
HXLINE( 486)		this->onScoreBoardsLoaded->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NG_obj,onBoardsReceived,(void))

void NG_obj::requestSaveSlots(::hx::Null< bool >  __o_loadFiles, ::Dynamic callback){
            		bool loadFiles = __o_loadFiles.Default(false);
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_500_requestSaveSlots)
HXDLIN( 500)		this->saveSlots->loadList(null(),callback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,requestSaveSlots,(void))

void NG_obj::timer(Float delay, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::Timer,timer, ::Dynamic,callback) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_510_timer)
HXLINE( 512)			timer->stop();
HXLINE( 513)			callback();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_507_timer)
HXLINE( 509)		 ::haxe::Timer timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(::Std_obj::_hx_int((delay * ( (Float)(1000) )))) ));
HXLINE( 510)		 ::Dynamic func =  ::Dynamic(new _hx_Closure_0(timer,callback));
HXDLIN( 510)		timer->run = func;
            	}


HX_DEFINE_DYNAMIC_FUNC2(NG_obj,timer,(void))

 ::io::newgrounds::NG NG_obj::core;

 ::io::newgrounds::utils::Dispatcher NG_obj::onCoreReady;

void NG_obj::create(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_109_create)
HXLINE( 111)		::io::newgrounds::NG_obj::core =  ::io::newgrounds::NG_obj::__alloc( HX_CTX ,appId,sessionId,debug,onSessionFail);
HXLINE( 113)		::io::newgrounds::NG_obj::onCoreReady->dispatch();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NG_obj,create,(void))

void NG_obj::createAndCheckSession(::String __o_appId,::hx::Null< bool >  __o_debug,::String backupSession, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_128_createAndCheckSession)
HXLINE( 130)		::String session = ::io::newgrounds::NGLite_obj::getSessionId();
HXLINE( 131)		if (::hx::IsNull( session )) {
HXLINE( 132)			session = backupSession;
            		}
HXLINE( 134)		::io::newgrounds::NG_obj::create(appId,session,debug,onSessionFail);
HXLINE( 136)		if (::hx::IsNotNull( ::io::newgrounds::NG_obj::core->sessionId )) {
HXLINE( 137)			::io::newgrounds::NG_obj::core->attemptingLogin = true;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NG_obj,createAndCheckSession,(void))

 ::EReg NG_obj::urlParser;

::String NG_obj::getHost(){
            	HX_STACKFRAME(&_hx_pos_45e56eda36fb0427_519_getHost)
HXLINE( 521)		::String url = null();
HXLINE( 523)		bool _hx_tmp;
HXDLIN( 523)		if (::hx::IsNotNull( url )) {
HXLINE( 523)			_hx_tmp = (url == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 523)			_hx_tmp = true;
            		}
HXDLIN( 523)		if (_hx_tmp) {
HXLINE( 524)			return HX_("AppView",86,e7,f4,0c);
            		}
HXLINE( 526)		bool _hx_tmp1;
HXDLIN( 526)		if ((url.indexOf(HX_("file",7c,ce,bb,43),null()) != 0)) {
HXLINE( 526)			_hx_tmp1 = (url.indexOf(HX_("127.0.0.1",fd,bc,5e,a1),null()) != -1);
            		}
            		else {
HXLINE( 526)			_hx_tmp1 = true;
            		}
HXDLIN( 526)		if (_hx_tmp1) {
HXLINE( 527)			return HX_("LocalHost",53,36,28,a9);
            		}
HXLINE( 529)		if (::io::newgrounds::NG_obj::urlParser->match(url)) {
HXLINE( 530)			return ::io::newgrounds::NG_obj::urlParser->matched(1);
            		}
HXLINE( 532)		return HX_("Unknown",6a,4b,cc,ae);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NG_obj,getHost,return )


::hx::ObjectPtr< NG_obj > NG_obj::__new(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	::hx::ObjectPtr< NG_obj > __this = new NG_obj();
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

::hx::ObjectPtr< NG_obj > NG_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	NG_obj *__this = (NG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NG_obj), true, "io.newgrounds.NG"));
	*(void **)__this = NG_obj::_hx_vtable;
	io::newgrounds::NGLite_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

NG_obj::NG_obj()
{
}

void NG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NG);
	HX_MARK_MEMBER_NAME(medals,"medals");
	HX_MARK_MEMBER_NAME(scoreBoards,"scoreBoards");
	HX_MARK_MEMBER_NAME(saveSlots,"saveSlots");
	HX_MARK_MEMBER_NAME(onLogin,"onLogin");
	HX_MARK_MEMBER_NAME(onLogOut,"onLogOut");
	HX_MARK_MEMBER_NAME(onMedalsLoaded,"onMedalsLoaded");
	HX_MARK_MEMBER_NAME(onScoreBoardsLoaded,"onScoreBoardsLoaded");
	HX_MARK_MEMBER_NAME(onSaveSlotsLoaded,"onSaveSlotsLoaded");
	HX_MARK_MEMBER_NAME(loggedIn,"loggedIn");
	HX_MARK_MEMBER_NAME(attemptingLogin,"attemptingLogin");
	HX_MARK_MEMBER_NAME(_loginCancelled,"_loginCancelled");
	HX_MARK_MEMBER_NAME(_passportCallback,"_passportCallback");
	HX_MARK_MEMBER_NAME(_session,"_session");
	 ::io::newgrounds::NGLite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(medals,"medals");
	HX_VISIT_MEMBER_NAME(scoreBoards,"scoreBoards");
	HX_VISIT_MEMBER_NAME(saveSlots,"saveSlots");
	HX_VISIT_MEMBER_NAME(onLogin,"onLogin");
	HX_VISIT_MEMBER_NAME(onLogOut,"onLogOut");
	HX_VISIT_MEMBER_NAME(onMedalsLoaded,"onMedalsLoaded");
	HX_VISIT_MEMBER_NAME(onScoreBoardsLoaded,"onScoreBoardsLoaded");
	HX_VISIT_MEMBER_NAME(onSaveSlotsLoaded,"onSaveSlotsLoaded");
	HX_VISIT_MEMBER_NAME(loggedIn,"loggedIn");
	HX_VISIT_MEMBER_NAME(attemptingLogin,"attemptingLogin");
	HX_VISIT_MEMBER_NAME(_loginCancelled,"_loginCancelled");
	HX_VISIT_MEMBER_NAME(_passportCallback,"_passportCallback");
	HX_VISIT_MEMBER_NAME(_session,"_session");
	 ::io::newgrounds::NGLite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_user() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( timer_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"medals") ) { return ::hx::Val( medals ); }
		if (HX_FIELD_EQ(inName,"logOut") ) { return ::hx::Val( logOut_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onLogin") ) { return ::hx::Val( onLogin ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_user") ) { return ::hx::Val( get_user_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLogOut") ) { return ::hx::Val( onLogOut ); }
		if (HX_FIELD_EQ(inName,"loggedIn") ) { return ::hx::Val( loggedIn ); }
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveSlots") ) { return ::hx::Val( saveSlots ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"passportUrl") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passportUrl() ); }
		if (HX_FIELD_EQ(inName,"scoreBoards") ) { return ::hx::Val( scoreBoards ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"requestLogin") ) { return ::hx::Val( requestLogin_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkSession") ) { return ::hx::Val( checkSession_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"requestMedals") ) { return ::hx::Val( requestMedals_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMedalsLoaded") ) { return ::hx::Val( onMedalsLoaded ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_passportUrl") ) { return ::hx::Val( get_passportUrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"attemptingLogin") ) { return ::hx::Val( attemptingLogin ); }
		if (HX_FIELD_EQ(inName,"_loginCancelled") ) { return ::hx::Val( _loginCancelled ); }
		if (HX_FIELD_EQ(inName,"openPassportUrl") ) { return ::hx::Val( openPassportUrl_dyn() ); }
		if (HX_FIELD_EQ(inName,"endLoginAndCall") ) { return ::hx::Val( endLoginAndCall_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onSessionReceive") ) { return ::hx::Val( onSessionReceive_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMedalsReceived") ) { return ::hx::Val( onMedalsReceived_dyn() ); }
		if (HX_FIELD_EQ(inName,"onBoardsReceived") ) { return ::hx::Val( onBoardsReceived_dyn() ); }
		if (HX_FIELD_EQ(inName,"requestSaveSlots") ) { return ::hx::Val( requestSaveSlots_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onSaveSlotsLoaded") ) { return ::hx::Val( onSaveSlotsLoaded ); }
		if (HX_FIELD_EQ(inName,"_passportCallback") ) { return ::hx::Val( _passportCallback ); }
		if (HX_FIELD_EQ(inName,"onPassportUrlOpen") ) { return ::hx::Val( onPassportUrlOpen_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"openPassportHelper") ) { return ::hx::Val( openPassportHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancelLoginRequest") ) { return ::hx::Val( cancelLoginRequest_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLogOutSuccessful") ) { return ::hx::Val( onLogOutSuccessful_dyn() ); }
		if (HX_FIELD_EQ(inName,"requestScoreBoards") ) { return ::hx::Val( requestScoreBoards_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onScoreBoardsLoaded") ) { return ::hx::Val( onScoreBoardsLoaded ); }
		if (HX_FIELD_EQ(inName,"checkInitialSession") ) { return ::hx::Val( checkInitialSession_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"dispatchPassportCallback") ) { return ::hx::Val( dispatchPassportCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = ( core ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHost") ) { outValue = getHost_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlParser") ) { outValue = ( urlParser ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { outValue = ( onCoreReady ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAndCheckSession") ) { outValue = createAndCheckSession_dyn(); return true; }
	}
	return false;
}

::hx::Val NG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"medals") ) { medals=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onLogin") ) { onLogin=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onLogOut") ) { onLogOut=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loggedIn") ) { loggedIn=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveSlots") ) { saveSlots=inValue.Cast<  ::io::newgrounds::utils::RawSaveSlotList >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreBoards") ) { scoreBoards=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMedalsLoaded") ) { onMedalsLoaded=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attemptingLogin") ) { attemptingLogin=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_loginCancelled") ) { _loginCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onSaveSlotsLoaded") ) { onSaveSlotsLoaded=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_passportCallback") ) { _passportCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onScoreBoardsLoaded") ) { onScoreBoardsLoaded=inValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=ioValue.Cast<  ::io::newgrounds::NG >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlParser") ) { urlParser=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { onCoreReady=ioValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return true; }
	}
	return false;
}

void NG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("user",4b,92,ad,4d));
	outFields->push(HX_("passportUrl",bd,8d,3e,35));
	outFields->push(HX_("medals",9c,3a,c2,fe));
	outFields->push(HX_("scoreBoards",ff,7b,4e,25));
	outFields->push(HX_("saveSlots",38,68,79,0d));
	outFields->push(HX_("onLogin",ca,77,31,0f));
	outFields->push(HX_("onLogOut",e9,a4,03,3c));
	outFields->push(HX_("onMedalsLoaded",80,33,31,67));
	outFields->push(HX_("onScoreBoardsLoaded",45,ed,e3,95));
	outFields->push(HX_("onSaveSlotsLoaded",fe,df,22,0b));
	outFields->push(HX_("loggedIn",07,3b,2d,e9));
	outFields->push(HX_("attemptingLogin",34,67,19,59));
	outFields->push(HX_("_loginCancelled",87,e0,3b,5c));
	outFields->push(HX_("_session",d7,70,50,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NG_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(NG_obj,medals),HX_("medals",9c,3a,c2,fe)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(NG_obj,scoreBoards),HX_("scoreBoards",ff,7b,4e,25)},
	{::hx::fsObject /*  ::io::newgrounds::utils::RawSaveSlotList */ ,(int)offsetof(NG_obj,saveSlots),HX_("saveSlots",38,68,79,0d)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onLogin),HX_("onLogin",ca,77,31,0f)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onLogOut),HX_("onLogOut",e9,a4,03,3c)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onMedalsLoaded),HX_("onMedalsLoaded",80,33,31,67)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onScoreBoardsLoaded),HX_("onScoreBoardsLoaded",45,ed,e3,95)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(int)offsetof(NG_obj,onSaveSlotsLoaded),HX_("onSaveSlotsLoaded",fe,df,22,0b)},
	{::hx::fsBool,(int)offsetof(NG_obj,loggedIn),HX_("loggedIn",07,3b,2d,e9)},
	{::hx::fsBool,(int)offsetof(NG_obj,attemptingLogin),HX_("attemptingLogin",34,67,19,59)},
	{::hx::fsBool,(int)offsetof(NG_obj,_loginCancelled),HX_("_loginCancelled",87,e0,3b,5c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NG_obj,_passportCallback),HX_("_passportCallback",16,0b,af,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NG_obj,_session),HX_("_session",d7,70,50,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NG_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::io::newgrounds::NG */ ,(void *) &NG_obj::core,HX_("core",5f,bd,c4,41)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(void *) &NG_obj::onCoreReady,HX_("onCoreReady",65,5d,00,e3)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &NG_obj::urlParser,HX_("urlParser",ae,f9,f6,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NG_obj_sMemberFields[] = {
	HX_("get_user",d4,4d,68,cd),
	HX_("get_passportUrl",54,45,20,f6),
	HX_("medals",9c,3a,c2,fe),
	HX_("scoreBoards",ff,7b,4e,25),
	HX_("saveSlots",38,68,79,0d),
	HX_("onLogin",ca,77,31,0f),
	HX_("onLogOut",e9,a4,03,3c),
	HX_("onMedalsLoaded",80,33,31,67),
	HX_("onScoreBoardsLoaded",45,ed,e3,95),
	HX_("onSaveSlotsLoaded",fe,df,22,0b),
	HX_("loggedIn",07,3b,2d,e9),
	HX_("attemptingLogin",34,67,19,59),
	HX_("_loginCancelled",87,e0,3b,5c),
	HX_("_passportCallback",16,0b,af,2d),
	HX_("_session",d7,70,50,cd),
	HX_("checkInitialSession",1a,02,4a,8a),
	HX_("requestLogin",9a,8b,c5,14),
	HX_("onSessionReceive",ac,b6,9a,52),
	HX_("openPassportUrl",13,82,92,a3),
	HX_("openPassportHelper",4a,e5,75,af),
	HX_("onPassportUrlOpen",c8,a1,47,f2),
	HX_("dispatchPassportCallback",91,5b,b5,5b),
	HX_("checkSession",6e,cf,1e,81),
	HX_("cancelLoginRequest",80,a5,61,18),
	HX_("endLoginAndCall",27,61,b7,d3),
	HX_("logOut",6a,ae,56,5c),
	HX_("onLogOutSuccessful",a3,a8,22,1e),
	HX_("requestMedals",4b,73,6c,ba),
	HX_("onMedalsReceived",5c,45,ad,96),
	HX_("requestScoreBoards",f0,68,0d,d6),
	HX_("onBoardsReceived",cd,ae,f2,b9),
	HX_("requestSaveSlots",e9,86,ae,ef),
	HX_("timer",c5,bf,35,10),
	::String(null()) };

static void NG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NG_obj::core,"core");
	HX_MARK_MEMBER_NAME(NG_obj::onCoreReady,"onCoreReady");
	HX_MARK_MEMBER_NAME(NG_obj::urlParser,"urlParser");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NG_obj::core,"core");
	HX_VISIT_MEMBER_NAME(NG_obj::onCoreReady,"onCoreReady");
	HX_VISIT_MEMBER_NAME(NG_obj::urlParser,"urlParser");
};

#endif

::hx::Class NG_obj::__mClass;

static ::String NG_obj_sStaticFields[] = {
	HX_("core",5f,bd,c4,41),
	HX_("onCoreReady",65,5d,00,e3),
	HX_("create",fc,66,0f,7c),
	HX_("createAndCheckSession",49,59,5b,b3),
	HX_("urlParser",ae,f9,f6,8d),
	HX_("getHost",1e,7f,95,17),
	::String(null())
};

void NG_obj::__register()
{
	NG_obj _hx_dummy;
	NG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.NG",33,4d,c0,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NG_obj::__GetStatic;
	__mClass->mSetStaticField = &NG_obj::__SetStatic;
	__mClass->mMarkFunc = NG_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NG_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_36_boot)
HXDLIN(  36)		onCoreReady =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_45e56eda36fb0427_517_boot)
HXDLIN( 517)		urlParser =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(?:http[s]?://)?([^:/\\s]+)(:[0-9]+)?((?:/\\w+)*/)([\\w\\-\\.]+[^#?\\s]+)([^#\\s]*)?(#[\\w\\-]+)?$",91,b6,f6,31),HX_("i",69,00,00,00));
            	}
}

} // end namespace io
} // end namespace newgrounds
