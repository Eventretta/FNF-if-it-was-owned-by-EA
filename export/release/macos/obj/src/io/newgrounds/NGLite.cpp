#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_io_newgrounds_Call
#include <io/newgrounds/Call.h>
#endif
#ifndef INCLUDED_io_newgrounds_ICallable
#include <io/newgrounds/ICallable.h>
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
#ifndef INCLUDED_io_newgrounds_crypto__Cipher_Cipher_Impl_
#include <io/newgrounds/crypto/_Cipher/Cipher_Impl_.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__EncodingFormat_EncodingFormat_Impl_
#include <io/newgrounds/crypto/_EncodingFormat/EncodingFormat_Impl_.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_Dispatcher
#include <io/newgrounds/utils/Dispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6580f5bc70768aad_29_new,"io.newgrounds.NGLite","new",0x224ee173,"io.newgrounds.NGLite.new","io/newgrounds/NGLite.hx",29,0x2dcf2bbd)
HX_DEFINE_STACK_FRAME(_hx_pos_6580f5bc70768aad_76_new,"io.newgrounds.NGLite","new",0x224ee173,"io.newgrounds.NGLite.new","io/newgrounds/NGLite.hx",76,0x2dcf2bbd)
HX_DEFINE_STACK_FRAME(_hx_pos_6580f5bc70768aad_77_new,"io.newgrounds.NGLite","new",0x224ee173,"io.newgrounds.NGLite.new","io/newgrounds/NGLite.hx",77,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_189_queueCall_io_newgrounds_Call_T,"io.newgrounds.NGLite","queueCall_io_newgrounds_Call_T",0x12d91f6a,"io.newgrounds.NGLite.queueCall_io_newgrounds_Call_T","io/newgrounds/NGLite.hx",189,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_203_markCallPending_io_newgrounds_Call_T,"io.newgrounds.NGLite","markCallPending_io_newgrounds_Call_T",0xe926968d,"io.newgrounds.NGLite.markCallPending_io_newgrounds_Call_T","io/newgrounds/NGLite.hx",203,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_204_markCallPending_io_newgrounds_Call_T,"io.newgrounds.NGLite","markCallPending_io_newgrounds_Call_T",0xe926968d,"io.newgrounds.NGLite.markCallPending_io_newgrounds_Call_T","io/newgrounds/NGLite.hx",204,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_199_markCallPending_io_newgrounds_Call_T,"io.newgrounds.NGLite","markCallPending_io_newgrounds_Call_T",0xe926968d,"io.newgrounds.NGLite.markCallPending_io_newgrounds_Call_T","io/newgrounds/NGLite.hx",199,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_46_set_sessionId,"io.newgrounds.NGLite","set_sessionId",0xa1135587,"io.newgrounds.NGLite.set_sessionId","io/newgrounds/NGLite.hx",46,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_84_checkInitialSession,"io.newgrounds.NGLite","checkInitialSession",0x7b4fa92d,"io.newgrounds.NGLite.checkInitialSession","io/newgrounds/NGLite.hx",84,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_90_initialSessionFail,"io.newgrounds.NGLite","initialSessionFail",0x62298a7d,"io.newgrounds.NGLite.initialSessionFail","io/newgrounds/NGLite.hx",90,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_207_onCallComplete,"io.newgrounds.NGLite","onCallComplete",0x735bb503,"io.newgrounds.NGLite.onCallComplete","io/newgrounds/NGLite.hx",207,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_215_checkQueue,"io.newgrounds.NGLite","checkQueue",0xe99216f6,"io.newgrounds.NGLite.checkQueue","io/newgrounds/NGLite.hx",215,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_226___default_log,"io.newgrounds.NGLite","__default_log",0x4dd7ee79,"io.newgrounds.NGLite.__default_log","io/newgrounds/NGLite.hx",226,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_232_logVerbose,"io.newgrounds.NGLite","logVerbose",0x54258aab,"io.newgrounds.NGLite.logVerbose","io/newgrounds/NGLite.hx",232,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_239___default_logError,"io.newgrounds.NGLite","__default_logError",0x7e2f368f,"io.newgrounds.NGLite.__default_logError","io/newgrounds/NGLite.hx",239,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_243_assert,"io.newgrounds.NGLite","assert",0xa217e393,"io.newgrounds.NGLite.assert","io/newgrounds/NGLite.hx",243,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_259_setupEncryption,"io.newgrounds.NGLite","setupEncryption",0xae744ef3,"io.newgrounds.NGLite.setupEncryption","io/newgrounds/NGLite.hx",259,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_268_setupEncryption,"io.newgrounds.NGLite","setupEncryption",0xae744ef3,"io.newgrounds.NGLite.setupEncryption","io/newgrounds/NGLite.hx",268,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_276_initEncryption,"io.newgrounds.NGLite","initEncryption",0x05664180,"io.newgrounds.NGLite.initEncryption","io/newgrounds/NGLite.hx",276,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_102_create,"io.newgrounds.NGLite","create",0xd22403c9,"io.newgrounds.NGLite.create","io/newgrounds/NGLite.hx",102,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_117_createAndCheckSession,"io.newgrounds.NGLite","createAndCheckSession",0x2e672b1c,"io.newgrounds.NGLite.createAndCheckSession","io/newgrounds/NGLite.hx",117,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_135_getUrl,"io.newgrounds.NGLite","getUrl",0xf93d0146,"io.newgrounds.NGLite.getUrl","io/newgrounds/NGLite.hx",135,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_166_getSessionId,"io.newgrounds.NGLite","getSessionId",0x48c5a9e8,"io.newgrounds.NGLite.getSessionId","io/newgrounds/NGLite.hx",166,0x2dcf2bbd)
HX_LOCAL_STACK_FRAME(_hx_pos_6580f5bc70768aad_32_boot,"io.newgrounds.NGLite","boot",0xdacf63bf,"io.newgrounds.NGLite.boot","io/newgrounds/NGLite.hx",32,0x2dcf2bbd)
namespace io{
namespace newgrounds{

void NGLite_obj::__construct(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            		bool debug = __o_debug.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_6580f5bc70768aad_29_new)
HXLINE( 185)		this->_pendingCalls = ::Array_obj< ::Dynamic>::__new();
HXLINE( 184)		this->_queuedCalls = ::Array_obj< ::Dynamic>::__new();
HXLINE(  67)		this->appId = appId;
HXLINE(  68)		this->set_sessionId(sessionId);
HXLINE(  69)		this->debug = debug;
HXLINE(  71)		this->calls =  ::io::newgrounds::components::ComponentList_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  73)		if (::hx::IsNotNull( this->sessionId )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,onFail, ::Dynamic,_g) HXARGC(1)
            			void _hx_run( ::Dynamic response){
            				HX_GC_STACKFRAME(&_hx_pos_6580f5bc70768aad_76_new)
HXLINE(  76)				_g(onFail,response);
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,onFail1, ::Dynamic,_g1) HXARGC(1)
            			void _hx_run( ::Dynamic error){
            				HX_GC_STACKFRAME(&_hx_pos_6580f5bc70768aad_77_new)
HXLINE(  77)				_g1(onFail1,error);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  76)			 ::Dynamic _g = this->checkInitialSession_dyn();
HXDLIN(  76)			 ::Dynamic onFail = onSessionFail;
HXDLIN(  76)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(onFail,_g));
HXLINE(  77)			 ::Dynamic _g1 = this->initialSessionFail_dyn();
HXDLIN(  77)			 ::Dynamic onFail1 = onSessionFail;
HXDLIN(  77)			 ::Dynamic _hx_tmp1 =  ::Dynamic(new _hx_Closure_1(onFail1,_g1));
HXLINE(  75)			this->calls->app->checkSession()->addDataHandler(_hx_tmp)->addErrorHandler(_hx_tmp1)->send();
            		}
            	}

Dynamic NGLite_obj::__CreateEmpty() { return new NGLite_obj; }

void *NGLite_obj::_hx_vtable = 0;

Dynamic NGLite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NGLite_obj > _hx_result = new NGLite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NGLite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7772213d;
}

void NGLite_obj::queueCall_io_newgrounds_Call_T( ::io::newgrounds::Call call){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_189_queueCall_io_newgrounds_Call_T)
HXLINE( 191)		if (this->verbose) {
HXLINE( 191)			this->log((HX_("queued - ",a0,ef,00,da) + call->component),::hx::SourceInfo(HX_("io/newgrounds/NGLite.hx",bd,2b,cf,2d),191,HX_("io.newgrounds.NGLite",01,ac,66,d9),HX_("queueCall",cf,6e,62,c4)));
            		}
HXLINE( 193)		this->_queuedCalls->push(call);
HXLINE( 194)		this->checkQueue();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NGLite_obj,queueCall_io_newgrounds_Call_T,(void))

void NGLite_obj::markCallPending_io_newgrounds_Call_T( ::io::newgrounds::Call call){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::NGLite,_gthis, ::io::newgrounds::Call,call) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_203_markCallPending_io_newgrounds_Call_T)
HXLINE( 203)			_gthis->onCallComplete(call);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::io::newgrounds::NGLite,_gthis, ::io::newgrounds::Call,call) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_204_markCallPending_io_newgrounds_Call_T)
HXLINE( 204)			_gthis->onCallComplete(call);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_199_markCallPending_io_newgrounds_Call_T)
HXDLIN( 199)		 ::io::newgrounds::NGLite _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 201)		this->_pendingCalls->push(call);
HXLINE( 203)		call->addDataHandler( ::Dynamic(new _hx_Closure_0(_gthis,call)));
HXLINE( 204)		call->addErrorHandler( ::Dynamic(new _hx_Closure_1(_gthis,call)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NGLite_obj,markCallPending_io_newgrounds_Call_T,(void))

::String NGLite_obj::set_sessionId(::String value){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_46_set_sessionId)
HXDLIN(  46)		::String _hx_tmp;
HXDLIN(  46)		if ((value == HX_("",00,00,00,00))) {
HXDLIN(  46)			_hx_tmp = null();
            		}
            		else {
HXDLIN(  46)			_hx_tmp = value;
            		}
HXDLIN(  46)		return (this->sessionId = _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NGLite_obj,set_sessionId,return )

void NGLite_obj::checkInitialSession( ::Dynamic onFail, ::Dynamic response){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_84_checkInitialSession)
HXDLIN(  84)		bool _hx_tmp;
HXDLIN(  84)		bool _hx_tmp1;
HXDLIN(  84)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXDLIN(  84)			_hx_tmp1 = !(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ));
            		}
            		else {
HXDLIN(  84)			_hx_tmp1 = true;
            		}
HXDLIN(  84)		if (!(_hx_tmp1)) {
HXDLIN(  84)			_hx_tmp = ( (bool)( ::Dynamic( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("session",56,17,98,93),::hx::paccDynamic))->__Field(HX_("expired",a5,5f,6a,25),::hx::paccDynamic)) );
            		}
            		else {
HXDLIN(  84)			_hx_tmp = true;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			 ::Dynamic _hx_tmp;
HXDLIN(  86)			if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE(  86)				_hx_tmp =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            			}
            			else {
HXLINE(  86)				_hx_tmp = response->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
            			}
HXDLIN(  86)			this->initialSessionFail(onFail,_hx_tmp);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NGLite_obj,checkInitialSession,(void))

void NGLite_obj::initialSessionFail( ::Dynamic onFail, ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_90_initialSessionFail)
HXLINE(  92)		this->set_sessionId(null());
HXLINE(  94)		if (::hx::IsNotNull( onFail )) {
HXLINE(  95)			onFail(error);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NGLite_obj,initialSessionFail,(void))

void NGLite_obj::onCallComplete(::Dynamic call){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_207_onCallComplete)
HXLINE( 209)		this->_pendingCalls->remove(call);
HXLINE( 210)		this->checkQueue();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NGLite_obj,onCallComplete,(void))

void NGLite_obj::checkQueue(){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_215_checkQueue)
HXDLIN( 215)		bool _hx_tmp;
HXDLIN( 215)		if ((this->_pendingCalls->length == 0)) {
HXDLIN( 215)			_hx_tmp = (this->_queuedCalls->length > 0);
            		}
            		else {
HXDLIN( 215)			_hx_tmp = false;
            		}
HXDLIN( 215)		if (_hx_tmp) {
HXLINE( 216)			::io::newgrounds::ICallable_obj::send(this->_queuedCalls->shift());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NGLite_obj,checkQueue,(void))

HX_BEGIN_DEFAULT_FUNC(__default_log,NGLite_obj)
void _hx_run( ::Dynamic any, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_226___default_log)
HXDLIN( 226)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 226)		_hx_tmp((HX_("[Newgrounds API] :: ",bc,20,01,84) + ::Std_obj::string(any)),pos);
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

void NGLite_obj::logVerbose( ::Dynamic any, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_232_logVerbose)
HXDLIN( 232)		if (this->verbose) {
HXLINE( 233)			this->log(any,pos);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NGLite_obj,logVerbose,(void))

HX_BEGIN_DEFAULT_FUNC(__default_logError,NGLite_obj)
void _hx_run( ::Dynamic any, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_239___default_logError)
HXDLIN( 239)		 ::Dynamic _hx_tmp = ( ( ::io::newgrounds::NGLite)(__this) )->log;
HXDLIN( 239)		_hx_tmp((HX_("Error: ",4e,a8,5b,b7) + ::Std_obj::string(any)),pos);
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

bool NGLite_obj::_hx_assert(bool condition, ::Dynamic msg, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_243_assert)
HXLINE( 244)		if (!(condition)) {
HXLINE( 245)			this->logError(msg,pos);
            		}
HXLINE( 247)		return condition;
            	}


HX_DEFINE_DYNAMIC_FUNC3(NGLite_obj,_hx_assert,return )

void NGLite_obj::setupEncryption(::String key,::String __o_cipher,::String __o_format){
            		::String cipher = __o_cipher;
            		if (::hx::IsNull(__o_cipher)) cipher = HX_("aes128",88,7a,3f,3c);
            		::String format = __o_format;
            		if (::hx::IsNull(__o_format)) format = HX_("base64",8f,fd,27,55);
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_259_setupEncryption)
HXLINE( 261)		this->encryptionHandler = null();
HXLINE( 263)		 ::Dynamic encrypt = ::io::newgrounds::crypto::_Cipher::Cipher_Impl__obj::generateEncrypter(cipher,::io::newgrounds::crypto::_EncodingFormat::EncodingFormat_Impl__obj::decode(format,key));
HXLINE( 264)		if (::hx::IsNotNull( encrypt )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,encrypt,::String,format) HXARGC(1)
            			::String _hx_run(::String data){
            				HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_268_setupEncryption)
HXLINE( 268)				::String format1 = format;
HXDLIN( 268)				return ::io::newgrounds::crypto::_EncodingFormat::EncodingFormat_Impl__obj::encode(format1,( ( ::haxe::io::Bytes)(encrypt(::haxe::io::Bytes_obj::ofString(data,null()))) ));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 266)			this->encryptionHandler =  ::Dynamic(new _hx_Closure_0(encrypt,format));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(NGLite_obj,setupEncryption,(void))

void NGLite_obj::initEncryption(::String key,::String __o_cipher,::String __o_format){
            		::String cipher = __o_cipher;
            		if (::hx::IsNull(__o_cipher)) cipher = HX_("rc4",63,d7,56,00);
            		::String format = __o_format;
            		if (::hx::IsNull(__o_format)) format = HX_("base64",8f,fd,27,55);
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_276_initEncryption)
HXDLIN( 276)		this->setupEncryption(key,cipher,format);
            	}


HX_DEFINE_DYNAMIC_FUNC3(NGLite_obj,initEncryption,(void))

 ::io::newgrounds::NGLite NGLite_obj::core;

 ::io::newgrounds::utils::Dispatcher NGLite_obj::onCoreReady;

void NGLite_obj::create(::String __o_appId,::String sessionId, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            	HX_GC_STACKFRAME(&_hx_pos_6580f5bc70768aad_102_create)
HXLINE( 104)		::io::newgrounds::NGLite_obj::core =  ::io::newgrounds::NGLite_obj::__alloc( HX_CTX ,appId,sessionId,false,onSessionFail);
HXLINE( 106)		::io::newgrounds::NGLite_obj::onCoreReady->dispatch();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NGLite_obj,create,(void))

void NGLite_obj::createAndCheckSession(::String __o_appId,::String backupSession, ::Dynamic onSessionFail){
            		::String appId = __o_appId;
            		if (::hx::IsNull(__o_appId)) appId = HX_("test",52,c8,f9,4c);
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_117_createAndCheckSession)
HXLINE( 119)		::String session = ::io::newgrounds::NGLite_obj::getSessionId();
HXLINE( 120)		if (::hx::IsNull( session )) {
HXLINE( 121)			session = backupSession;
            		}
HXLINE( 123)		::io::newgrounds::NGLite_obj::create(appId,session,onSessionFail);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NGLite_obj,createAndCheckSession,(void))

::String NGLite_obj::getUrl(){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_135_getUrl)
HXDLIN( 135)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NGLite_obj,getUrl,return )

::String NGLite_obj::getSessionId(){
            	HX_STACKFRAME(&_hx_pos_6580f5bc70768aad_166_getSessionId)
HXDLIN( 166)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NGLite_obj,getSessionId,return )


void NGLite_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,NGLite_obj *_hx_obj) {
	if (!_hx_obj->logError.mPtr) _hx_obj->logError = new __default_logError(_hx_obj);
	if (!_hx_obj->log.mPtr) _hx_obj->log = new __default_log(_hx_obj);
}
::hx::ObjectPtr< NGLite_obj > NGLite_obj::__new(::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	::hx::ObjectPtr< NGLite_obj > __this = new NGLite_obj();
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

::hx::ObjectPtr< NGLite_obj > NGLite_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_appId,::String sessionId,::hx::Null< bool >  __o_debug, ::Dynamic onSessionFail) {
	NGLite_obj *__this = (NGLite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NGLite_obj), true, "io.newgrounds.NGLite"));
	*(void **)__this = NGLite_obj::_hx_vtable;
	io::newgrounds::NGLite_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_appId,sessionId,__o_debug,onSessionFail);
	return __this;
}

NGLite_obj::NGLite_obj()
{
	logError = new __default_logError(this);
	log = new __default_log(this);
}

void NGLite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NGLite);
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(appId,"appId");
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(sessionId,"sessionId");
	HX_MARK_MEMBER_NAME(calls,"calls");
	HX_MARK_MEMBER_NAME(encryptionHandler,"encryptionHandler");
	HX_MARK_MEMBER_NAME(_queuedCalls,"_queuedCalls");
	HX_MARK_MEMBER_NAME(_pendingCalls,"_pendingCalls");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(logError,"logError");
	HX_MARK_END_CLASS();
}

void NGLite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(appId,"appId");
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(sessionId,"sessionId");
	HX_VISIT_MEMBER_NAME(calls,"calls");
	HX_VISIT_MEMBER_NAME(encryptionHandler,"encryptionHandler");
	HX_VISIT_MEMBER_NAME(_queuedCalls,"_queuedCalls");
	HX_VISIT_MEMBER_NAME(_pendingCalls,"_pendingCalls");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(logError,"logError");
}

::hx::Val NGLite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return ::hx::Val( log ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return ::hx::Val( host ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return ::hx::Val( debug ); }
		if (HX_FIELD_EQ(inName,"appId") ) { return ::hx::Val( appId ); }
		if (HX_FIELD_EQ(inName,"calls") ) { return ::hx::Val( calls ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { return ::hx::Val( _hx_assert_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return ::hx::Val( verbose ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"logError") ) { return ::hx::Val( logError ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sessionId") ) { return ::hx::Val( sessionId ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkQueue") ) { return ::hx::Val( checkQueue_dyn() ); }
		if (HX_FIELD_EQ(inName,"logVerbose") ) { return ::hx::Val( logVerbose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_queuedCalls") ) { return ::hx::Val( _queuedCalls ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_sessionId") ) { return ::hx::Val( set_sessionId_dyn() ); }
		if (HX_FIELD_EQ(inName,"_pendingCalls") ) { return ::hx::Val( _pendingCalls ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onCallComplete") ) { return ::hx::Val( onCallComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"initEncryption") ) { return ::hx::Val( initEncryption_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setupEncryption") ) { return ::hx::Val( setupEncryption_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encryptionHandler") ) { return ::hx::Val( encryptionHandler ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"initialSessionFail") ) { return ::hx::Val( initialSessionFail_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkInitialSession") ) { return ::hx::Val( checkInitialSession_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"queueCall_io_newgrounds_Call_T") ) { return ::hx::Val( queueCall_io_newgrounds_Call_T_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"markCallPending_io_newgrounds_Call_T") ) { return ::hx::Val( markCallPending_io_newgrounds_Call_T_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NGLite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { outValue = ( core ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getUrl") ) { outValue = getUrl_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { outValue = ( onCoreReady ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSessionId") ) { outValue = getSessionId_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAndCheckSession") ) { outValue = createAndCheckSession_dyn(); return true; }
	}
	return false;
}

::hx::Val NGLite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"appId") ) { appId=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"calls") ) { calls=inValue.Cast<  ::io::newgrounds::components::ComponentList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"logError") ) { logError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sessionId") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_sessionId(inValue.Cast< ::String >()) );sessionId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_queuedCalls") ) { _queuedCalls=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pendingCalls") ) { _pendingCalls=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"encryptionHandler") ) { encryptionHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NGLite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=ioValue.Cast<  ::io::newgrounds::NGLite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onCoreReady") ) { onCoreReady=ioValue.Cast<  ::io::newgrounds::utils::Dispatcher >(); return true; }
	}
	return false;
}

void NGLite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("verbose",82,d7,b9,71));
	outFields->push(HX_("debug",53,52,1f,d7));
	outFields->push(HX_("appId",dc,66,3b,24));
	outFields->push(HX_("host",68,cf,12,45));
	outFields->push(HX_("sessionId",d1,58,4d,bb));
	outFields->push(HX_("calls",15,72,1b,41));
	outFields->push(HX_("_queuedCalls",63,35,7d,bf));
	outFields->push(HX_("_pendingCalls",1d,41,30,db));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NGLite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(NGLite_obj,verbose),HX_("verbose",82,d7,b9,71)},
	{::hx::fsBool,(int)offsetof(NGLite_obj,debug),HX_("debug",53,52,1f,d7)},
	{::hx::fsString,(int)offsetof(NGLite_obj,appId),HX_("appId",dc,66,3b,24)},
	{::hx::fsString,(int)offsetof(NGLite_obj,host),HX_("host",68,cf,12,45)},
	{::hx::fsString,(int)offsetof(NGLite_obj,sessionId),HX_("sessionId",d1,58,4d,bb)},
	{::hx::fsObject /*  ::io::newgrounds::components::ComponentList */ ,(int)offsetof(NGLite_obj,calls),HX_("calls",15,72,1b,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NGLite_obj,encryptionHandler),HX_("encryptionHandler",87,e1,f0,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NGLite_obj,_queuedCalls),HX_("_queuedCalls",63,35,7d,bf)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NGLite_obj,_pendingCalls),HX_("_pendingCalls",1d,41,30,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NGLite_obj,log),HX_("log",84,54,52,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NGLite_obj,logError),HX_("logError",a4,08,30,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NGLite_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::io::newgrounds::NGLite */ ,(void *) &NGLite_obj::core,HX_("core",5f,bd,c4,41)},
	{::hx::fsObject /*  ::io::newgrounds::utils::Dispatcher */ ,(void *) &NGLite_obj::onCoreReady,HX_("onCoreReady",65,5d,00,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NGLite_obj_sMemberFields[] = {
	HX_("queueCall_io_newgrounds_Call_T",9d,43,06,7e),
	HX_("markCallPending_io_newgrounds_Call_T",00,63,8d,c1),
	HX_("verbose",82,d7,b9,71),
	HX_("debug",53,52,1f,d7),
	HX_("appId",dc,66,3b,24),
	HX_("host",68,cf,12,45),
	HX_("sessionId",d1,58,4d,bb),
	HX_("set_sessionId",b4,0e,b7,c1),
	HX_("calls",15,72,1b,41),
	HX_("encryptionHandler",87,e1,f0,ab),
	HX_("checkInitialSession",1a,02,4a,8a),
	HX_("initialSessionFail",30,6e,76,16),
	HX_("_queuedCalls",63,35,7d,bf),
	HX_("_pendingCalls",1d,41,30,db),
	HX_("onCallComplete",36,03,fa,e1),
	HX_("checkQueue",a9,8f,da,6d),
	HX_("log",84,54,52,00),
	HX_("logVerbose",5e,03,6e,d8),
	HX_("logError",a4,08,30,5e),
	HX_("assert",c6,46,03,4c),
	HX_("setupEncryption",60,6d,5a,0a),
	HX_("initEncryption",b3,8f,04,74),
	::String(null()) };

static void NGLite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NGLite_obj::core,"core");
	HX_MARK_MEMBER_NAME(NGLite_obj::onCoreReady,"onCoreReady");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NGLite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NGLite_obj::core,"core");
	HX_VISIT_MEMBER_NAME(NGLite_obj::onCoreReady,"onCoreReady");
};

#endif

::hx::Class NGLite_obj::__mClass;

static ::String NGLite_obj_sStaticFields[] = {
	HX_("core",5f,bd,c4,41),
	HX_("onCoreReady",65,5d,00,e3),
	HX_("create",fc,66,0f,7c),
	HX_("createAndCheckSession",49,59,5b,b3),
	HX_("getUrl",79,64,28,a3),
	HX_("getSessionId",5b,f5,a3,ca),
	::String(null())
};

void NGLite_obj::__register()
{
	NGLite_obj _hx_dummy;
	NGLite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.NGLite",01,ac,66,d9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NGLite_obj::__GetStatic;
	__mClass->mSetStaticField = &NGLite_obj::__SetStatic;
	__mClass->mMarkFunc = NGLite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NGLite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NGLite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NGLite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NGLite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NGLite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NGLite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NGLite_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_6580f5bc70768aad_32_boot)
HXDLIN(  32)		onCoreReady =  ::io::newgrounds::utils::Dispatcher_obj::__alloc( HX_CTX );
            	}
}

} // end namespace io
} // end namespace newgrounds
