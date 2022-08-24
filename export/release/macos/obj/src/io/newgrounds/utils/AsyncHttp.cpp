#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_AsyncHttp
#include <io/newgrounds/utils/AsyncHttp.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_Thread_Impl_
#include <sys/thread/_Thread/Thread_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_484b684992387090_110_new,"io.newgrounds.utils.AsyncHttp","new",0xff573e7f,"io.newgrounds.utils.AsyncHttp.new","io/newgrounds/utils/AsyncHttp.hx",110,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_120_start,"io.newgrounds.utils.AsyncHttp","start",0xdd5de841,"io.newgrounds.utils.AsyncHttp.start","io/newgrounds/utils/AsyncHttp.hx",120,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_137_handleMessage,"io.newgrounds.utils.AsyncHttp","handleMessage",0xe04e09de,"io.newgrounds.utils.AsyncHttp.handleMessage","io/newgrounds/utils/AsyncHttp.hx",137,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_153_handleMessage,"io.newgrounds.utils.AsyncHttp","handleMessage",0xe04e09de,"io.newgrounds.utils.AsyncHttp.handleMessage","io/newgrounds/utils/AsyncHttp.hx",153,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_158_handleMessage,"io.newgrounds.utils.AsyncHttp","handleMessage",0xe04e09de,"io.newgrounds.utils.AsyncHttp.handleMessage","io/newgrounds/utils/AsyncHttp.hx",158,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_167___default_logVerbose,"io.newgrounds.utils.AsyncHttp","__default_logVerbose",0x7d72f77d,"io.newgrounds.utils.AsyncHttp.__default_logVerbose","io/newgrounds/utils/AsyncHttp.hx",167,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_169_cleanUp,"io.newgrounds.utils.AsyncHttp","cleanUp",0xd50059e3,"io.newgrounds.utils.AsyncHttp.cleanUp","io/newgrounds/utils/AsyncHttp.hx",169,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_57_getText,"io.newgrounds.utils.AsyncHttp","getText",0x493ae602,"io.newgrounds.utils.AsyncHttp.getText","io/newgrounds/utils/AsyncHttp.hx",57,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_71_send,"io.newgrounds.utils.AsyncHttp","send",0x704d7a49,"io.newgrounds.utils.AsyncHttp.send","io/newgrounds/utils/AsyncHttp.hx",71,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_83_sendSync,"io.newgrounds.utils.AsyncHttp","sendSync",0x3d0bb944,"io.newgrounds.utils.AsyncHttp.sendSync","io/newgrounds/utils/AsyncHttp.hx",83,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_187_sendAsync,"io.newgrounds.utils.AsyncHttp","sendAsync",0xcc110c33,"io.newgrounds.utils.AsyncHttp.sendAsync","io/newgrounds/utils/AsyncHttp.hx",187,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_193_startTimer,"io.newgrounds.utils.AsyncHttp","startTimer",0xfdcebbc4,"io.newgrounds.utils.AsyncHttp.startTimer","io/newgrounds/utils/AsyncHttp.hx",193,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_202_stopTimer,"io.newgrounds.utils.AsyncHttp","stopTimer",0x05db47c2,"io.newgrounds.utils.AsyncHttp.stopTimer","io/newgrounds/utils/AsyncHttp.hx",202,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_208_update,"io.newgrounds.utils.AsyncHttp","update",0x55d8754a,"io.newgrounds.utils.AsyncHttp.update","io/newgrounds/utils/AsyncHttp.hx",208,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_217_sendThreaded,"io.newgrounds.utils.AsyncHttp","sendThreaded",0xde05c112,"io.newgrounds.utils.AsyncHttp.sendThreaded","io/newgrounds/utils/AsyncHttp.hx",217,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_225_sendThreaded,"io.newgrounds.utils.AsyncHttp","sendThreaded",0xde05c112,"io.newgrounds.utils.AsyncHttp.sendThreaded","io/newgrounds/utils/AsyncHttp.hx",225,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_226_sendThreaded,"io.newgrounds.utils.AsyncHttp","sendThreaded",0xde05c112,"io.newgrounds.utils.AsyncHttp.sendThreaded","io/newgrounds/utils/AsyncHttp.hx",226,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_227_sendThreaded,"io.newgrounds.utils.AsyncHttp","sendThreaded",0xde05c112,"io.newgrounds.utils.AsyncHttp.sendThreaded","io/newgrounds/utils/AsyncHttp.hx",227,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_100_boot,"io.newgrounds.utils.AsyncHttp","boot",0x65187133,"io.newgrounds.utils.AsyncHttp.boot","io/newgrounds/utils/AsyncHttp.hx",100,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_484b684992387090_102_boot,"io.newgrounds.utils.AsyncHttp","boot",0x65187133,"io.newgrounds.utils.AsyncHttp.boot","io/newgrounds/utils/AsyncHttp.hx",102,0x570428f2)
namespace io{
namespace newgrounds{
namespace utils{

void AsyncHttp_obj::__construct( ::Dynamic logVerbose){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_110_new)
HXLINE( 112)		this->_key = ::io::newgrounds::utils::AsyncHttp_obj::_count++;
HXLINE( 113)		this->_worker = ::sys::thread::_Thread::HaxeThread_obj::create(::io::newgrounds::utils::AsyncHttp_obj::sendThreaded_dyn(),false);
HXLINE( 115)		if (::hx::IsNotNull( logVerbose )) {
HXLINE( 116)			this->logVerbose = logVerbose;
            		}
HXLINE( 117)		this->logVerbose((HX_("async http created: ",5a,00,07,df) + this->_key),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),117,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("new",60,d0,53,00)));
            	}

Dynamic AsyncHttp_obj::__CreateEmpty() { return new AsyncHttp_obj; }

void *AsyncHttp_obj::_hx_vtable = 0;

Dynamic AsyncHttp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncHttp_obj > _hx_result = new AsyncHttp_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AsyncHttp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ff8ecc5;
}

void AsyncHttp_obj::start(::String path,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_120_start)
HXLINE( 122)		this->logVerbose((HX_("async http started: ",f3,bb,3d,a6) + this->_key),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),122,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("start",62,74,0b,84)));
HXLINE( 124)		if (::hx::IsEq( ::io::newgrounds::utils::AsyncHttp_obj::_map->keys()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)(),false )) {
HXLINE( 125)			::io::newgrounds::utils::AsyncHttp_obj::startTimer();
            		}
HXLINE( 127)		::io::newgrounds::utils::AsyncHttp_obj::_map->set(this->_key,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 129)		this->_onData = onData;
HXLINE( 130)		this->_onError = onError;
HXLINE( 131)		if (::hx::IsNotNull( onStatus )) {
HXLINE( 132)			this->_onStatus = onStatus;
            		}
HXLINE( 134)		{
HXLINE( 134)			 ::sys::thread::_Thread::HaxeThread this1 = this->_worker;
HXDLIN( 134)			 ::Dynamic msg =  ::Dynamic(::hx::Anon_obj::Create(5)
            				->setFixed(0,HX_("logVerbose",5e,03,6e,d8),this->logVerbose)
            				->setFixed(1,HX_("key",9f,89,51,00),this->_key)
            				->setFixed(2,HX_("source",db,b0,31,32),::sys::thread::_Thread::HaxeThread_obj::current())
            				->setFixed(3,HX_("args",5d,8d,74,40),data)
            				->setFixed(4,HX_("path",a5,e5,51,4a),path));
HXDLIN( 134)			this1->messages->add(msg);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(AsyncHttp_obj,start,(void))

void AsyncHttp_obj::handleMessage( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_137_handleMessage)
HXLINE( 139)		this->logVerbose((HX_("handling message: ",32,3b,37,e9) + this->_key),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),139,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("handleMessage",ff,1e,86,b2)));
HXLINE( 141)		if (::hx::IsNotNull( data->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic) )) {
HXLINE( 143)			this->logVerbose( ::Dynamic((HX_("\t- status: ",f4,c1,3f,1d) + data->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic))),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),143,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("handleMessage",ff,1e,86,b2)));
HXLINE( 144)			if (::hx::IsNotNull( this->_onStatus )) {
HXLINE( 145)				this->_onStatus(( (int)(data->__Field(HX_("status",32,e7,fb,05),::hx::paccDynamic)) ));
            			}
HXLINE( 146)			return;
            		}
HXLINE( 149)		 ::Dynamic tempFunc;
HXLINE( 150)		if (::hx::IsNotNull( data->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,a1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_484b684992387090_153_handleMessage)
HXLINE( 153)				_g(a1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 152)			this->logVerbose(HX_("\t- data",c6,4f,86,23),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),152,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("handleMessage",ff,1e,86,b2)));
HXLINE( 153)			 ::Dynamic _g = this->_onData;
HXDLIN( 153)			::String a1 = ( (::String)(data->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXDLIN( 153)			tempFunc =  ::Dynamic(new _hx_Closure_0(a1,_g));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,a1, ::Dynamic,_g) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_484b684992387090_158_handleMessage)
HXLINE( 158)				_g(a1);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 157)			this->logVerbose(HX_("\t- error",ac,3a,a1,90),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),157,HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d),HX_("handleMessage",ff,1e,86,b2)));
HXLINE( 158)			 ::Dynamic _g = this->_onError;
HXDLIN( 158)			::String a1 = ( (::String)(data->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic)) );
HXDLIN( 158)			tempFunc =  ::Dynamic(new _hx_Closure_1(a1,_g));
            		}
HXLINE( 161)		this->cleanUp();
HXLINE( 164)		tempFunc();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AsyncHttp_obj,handleMessage,(void))

HX_BEGIN_DEFAULT_FUNC(__default_logVerbose,AsyncHttp_obj)
void _hx_run(::String msg, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_167___default_logVerbose)
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

void AsyncHttp_obj::cleanUp(){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_169_cleanUp)
HXLINE( 171)		::io::newgrounds::utils::AsyncHttp_obj::_map->remove(this->_key);
HXLINE( 173)		this->_onData = null();
HXLINE( 174)		this->_onError = null();
HXLINE( 176)		if (::hx::IsEq( ::io::newgrounds::utils::AsyncHttp_obj::_map->keys()->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)(),false )) {
HXLINE( 177)			::io::newgrounds::utils::AsyncHttp_obj::stopTimer();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AsyncHttp_obj,cleanUp,(void))

void AsyncHttp_obj::getText(::String path, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_57_getText)
HXDLIN(  57)		::io::newgrounds::utils::AsyncHttp_obj::send(path,null(),onData,onError,onStatus);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AsyncHttp_obj,getText,(void))

void AsyncHttp_obj::send(::String path,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_71_send)
HXDLIN(  71)		::io::newgrounds::utils::AsyncHttp_obj::sendAsync(path,data,onData,onError,onStatus,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AsyncHttp_obj,send,(void))

 ::sys::Http AsyncHttp_obj::sendSync(::String path,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus){
            	HX_GC_STACKFRAME(&_hx_pos_484b684992387090_83_sendSync)
HXLINE(  85)		 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,path);
HXLINE(  87)		if (::hx::IsNotNull( data )) {
HXLINE(  88)			http->setParameter(HX_("input",0a,c4,1d,be),data);
            		}
HXLINE(  90)		http->onData = onData;
HXLINE(  91)		http->onError = onError;
HXLINE(  92)		if (::hx::IsNotNull( onStatus )) {
HXLINE(  93)			http->onStatus = onStatus;
            		}
HXLINE(  95)		http->request(::hx::IsNotNull( data ));
HXLINE(  96)		return http;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AsyncHttp_obj,sendSync,return )

 ::haxe::ds::IntMap AsyncHttp_obj::_map;

 ::haxe::Timer AsyncHttp_obj::_timer;

int AsyncHttp_obj::_count;

void AsyncHttp_obj::sendAsync(::String path,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus, ::Dynamic logVerbose){
            	HX_GC_STACKFRAME(&_hx_pos_484b684992387090_187_sendAsync)
HXLINE( 189)		 ::io::newgrounds::utils::AsyncHttp http =  ::io::newgrounds::utils::AsyncHttp_obj::__alloc( HX_CTX ,logVerbose);
HXLINE( 190)		http->start(path,data,onData,onError,onStatus);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(AsyncHttp_obj,sendAsync,(void))

void AsyncHttp_obj::startTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_484b684992387090_193_startTimer)
HXLINE( 195)		if (::hx::IsNotNull( ::io::newgrounds::utils::AsyncHttp_obj::_timer )) {
HXLINE( 196)			return;
            		}
HXLINE( 198)		::io::newgrounds::utils::AsyncHttp_obj::_timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,((Float)16.6666666666666679));
HXLINE( 199)		::io::newgrounds::utils::AsyncHttp_obj::_timer->run = ::io::newgrounds::utils::AsyncHttp_obj::update_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AsyncHttp_obj,startTimer,(void))

void AsyncHttp_obj::stopTimer(){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_202_stopTimer)
HXLINE( 204)		::io::newgrounds::utils::AsyncHttp_obj::_timer->stop();
HXLINE( 205)		::io::newgrounds::utils::AsyncHttp_obj::_timer = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AsyncHttp_obj,stopTimer,(void))

void AsyncHttp_obj::update(){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_208_update)
HXLINE( 210)		 ::Dynamic message = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(false);
HXLINE( 211)		if (::hx::IsNotNull( message )) {
HXLINE( 212)			( ( ::io::newgrounds::utils::AsyncHttp)(::io::newgrounds::utils::AsyncHttp_obj::_map->get( ::Dynamic(message->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)))) )->handleMessage(message);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AsyncHttp_obj,update,(void))

void AsyncHttp_obj::sendThreaded(){
            	HX_STACKFRAME(&_hx_pos_484b684992387090_217_sendThreaded)
HXDLIN( 217)		while(true){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,data) HXARGC(1)
            			void _hx_run(::String reply){
            				HX_STACKFRAME(&_hx_pos_484b684992387090_225_sendThreaded)
HXLINE( 225)				( ( ::sys::thread::_Thread::HaxeThread)(data->__Field(HX_("source",db,b0,31,32),::hx::paccDynamic)) )->messages->add( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("key",9f,89,51,00), ::Dynamic(data->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)))
            					->setFixed(1,HX_("data",2a,56,63,42),reply)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,data) HXARGC(1)
            			void _hx_run(::String error){
            				HX_STACKFRAME(&_hx_pos_484b684992387090_226_sendThreaded)
HXLINE( 226)				( ( ::sys::thread::_Thread::HaxeThread)(data->__Field(HX_("source",db,b0,31,32),::hx::paccDynamic)) )->messages->add( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("key",9f,89,51,00), ::Dynamic(data->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)))
            					->setFixed(1,HX_("error",c8,cb,29,73),error)));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,data) HXARGC(1)
            			void _hx_run(int status){
            				HX_STACKFRAME(&_hx_pos_484b684992387090_227_sendThreaded)
HXLINE( 227)				( ( ::sys::thread::_Thread::HaxeThread)(data->__Field(HX_("source",db,b0,31,32),::hx::paccDynamic)) )->messages->add( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("key",9f,89,51,00), ::Dynamic(data->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)))
            					->setFixed(1,HX_("status",32,e7,fb,05),status)));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 219)			 ::Dynamic data = ::sys::thread::_Thread::Thread_Impl__obj::readMessage(true);
HXLINE( 220)			data->__Field(HX_("logVerbose",5e,03,6e,d8),::hx::paccDynamic)( ::Dynamic((HX_("start message received: ",be,e4,24,d5) + data->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic))));
HXLINE( 222)			::io::newgrounds::utils::AsyncHttp_obj::sendSync(( (::String)(data->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) ),( (::String)(data->__Field(HX_("args",5d,8d,74,40),::hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_0(data)), ::Dynamic(new _hx_Closure_1(data)), ::Dynamic(new _hx_Closure_2(data)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AsyncHttp_obj,sendThreaded,(void))


void AsyncHttp_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,AsyncHttp_obj *_hx_obj) {
	if (!_hx_obj->logVerbose.mPtr) _hx_obj->logVerbose = new __default_logVerbose(_hx_obj);
}
::hx::ObjectPtr< AsyncHttp_obj > AsyncHttp_obj::__new( ::Dynamic logVerbose) {
	::hx::ObjectPtr< AsyncHttp_obj > __this = new AsyncHttp_obj();
	__this->__construct(logVerbose);
	return __this;
}

::hx::ObjectPtr< AsyncHttp_obj > AsyncHttp_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic logVerbose) {
	AsyncHttp_obj *__this = (AsyncHttp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AsyncHttp_obj), true, "io.newgrounds.utils.AsyncHttp"));
	*(void **)__this = AsyncHttp_obj::_hx_vtable;
	io::newgrounds::utils::AsyncHttp_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(logVerbose);
	return __this;
}

AsyncHttp_obj::AsyncHttp_obj()
{
	logVerbose = new __default_logVerbose(this);
}

void AsyncHttp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncHttp);
	HX_MARK_MEMBER_NAME(_key,"_key");
	HX_MARK_MEMBER_NAME(_onData,"_onData");
	HX_MARK_MEMBER_NAME(_onError,"_onError");
	HX_MARK_MEMBER_NAME(_onStatus,"_onStatus");
	HX_MARK_MEMBER_NAME(_worker,"_worker");
	HX_MARK_MEMBER_NAME(logVerbose,"logVerbose");
	HX_MARK_END_CLASS();
}

void AsyncHttp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_key,"_key");
	HX_VISIT_MEMBER_NAME(_onData,"_onData");
	HX_VISIT_MEMBER_NAME(_onError,"_onError");
	HX_VISIT_MEMBER_NAME(_onStatus,"_onStatus");
	HX_VISIT_MEMBER_NAME(_worker,"_worker");
	HX_VISIT_MEMBER_NAME(logVerbose,"logVerbose");
}

::hx::Val AsyncHttp_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return ::hx::Val( _key ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_onData") ) { return ::hx::Val( _onData ); }
		if (HX_FIELD_EQ(inName,"_worker") ) { return ::hx::Val( _worker ); }
		if (HX_FIELD_EQ(inName,"cleanUp") ) { return ::hx::Val( cleanUp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onError") ) { return ::hx::Val( _onError ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onStatus") ) { return ::hx::Val( _onStatus ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"logVerbose") ) { return ::hx::Val( logVerbose ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleMessage") ) { return ::hx::Val( handleMessage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AsyncHttp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { outValue = send_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = ( _map ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { outValue = ( _timer ); return true; }
		if (HX_FIELD_EQ(inName,"_count") ) { outValue = ( _count ); return true; }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sendSync") ) { outValue = sendSync_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendAsync") ) { outValue = sendAsync_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stopTimer") ) { outValue = stopTimer_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { outValue = startTimer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sendThreaded") ) { outValue = sendThreaded_dyn(); return true; }
	}
	return false;
}

::hx::Val AsyncHttp_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_onData") ) { _onData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_worker") ) { _worker=inValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onError") ) { _onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onStatus") ) { _onStatus=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"logVerbose") ) { logVerbose=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AsyncHttp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=ioValue.Cast<  ::haxe::Timer >(); return true; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AsyncHttp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_key",a0,ce,1c,3f));
	outFields->push(HX_("_worker",1d,42,15,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AsyncHttp_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AsyncHttp_obj,_key),HX_("_key",a0,ce,1c,3f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncHttp_obj,_onData),HX_("_onData",88,70,64,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncHttp_obj,_onError),HX_("_onError",aa,c3,1f,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncHttp_obj,_onStatus),HX_("_onStatus",10,d5,3e,2d)},
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(int)offsetof(AsyncHttp_obj,_worker),HX_("_worker",1d,42,15,38)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AsyncHttp_obj,logVerbose),HX_("logVerbose",5e,03,6e,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AsyncHttp_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &AsyncHttp_obj::_map,HX_("_map",9d,4f,1e,3f)},
	{::hx::fsObject /*  ::haxe::Timer */ ,(void *) &AsyncHttp_obj::_timer,HX_("_timer",06,07,1d,0c)},
	{::hx::fsInt,(void *) &AsyncHttp_obj::_count,HX_("_count",10,8c,4a,46)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AsyncHttp_obj_sMemberFields[] = {
	HX_("_key",a0,ce,1c,3f),
	HX_("_onData",88,70,64,53),
	HX_("_onError",aa,c3,1f,43),
	HX_("_onStatus",10,d5,3e,2d),
	HX_("_worker",1d,42,15,38),
	HX_("start",62,74,0b,84),
	HX_("handleMessage",ff,1e,86,b2),
	HX_("logVerbose",5e,03,6e,d8),
	HX_("cleanUp",44,f0,41,ab),
	::String(null()) };

static void AsyncHttp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncHttp_obj::_map,"_map");
	HX_MARK_MEMBER_NAME(AsyncHttp_obj::_timer,"_timer");
	HX_MARK_MEMBER_NAME(AsyncHttp_obj::_count,"_count");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AsyncHttp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncHttp_obj::_map,"_map");
	HX_VISIT_MEMBER_NAME(AsyncHttp_obj::_timer,"_timer");
	HX_VISIT_MEMBER_NAME(AsyncHttp_obj::_count,"_count");
};

#endif

::hx::Class AsyncHttp_obj::__mClass;

static ::String AsyncHttp_obj_sStaticFields[] = {
	HX_("getText",63,7c,7c,1f),
	HX_("send",48,8d,50,4c),
	HX_("sendSync",c3,b7,2d,e0),
	HX_("_map",9d,4f,1e,3f),
	HX_("_timer",06,07,1d,0c),
	HX_("_count",10,8c,4a,46),
	HX_("sendAsync",d4,bc,ad,e6),
	HX_("startTimer",03,98,4c,2c),
	HX_("stopTimer",63,f8,77,20),
	HX_("update",09,86,05,87),
	HX_("sendThreaded",11,6b,e2,0c),
	::String(null())
};

void AsyncHttp_obj::__register()
{
	AsyncHttp_obj _hx_dummy;
	AsyncHttp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.utils.AsyncHttp",0d,93,20,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncHttp_obj::__GetStatic;
	__mClass->mSetStaticField = &AsyncHttp_obj::__SetStatic;
	__mClass->mMarkFunc = AsyncHttp_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncHttp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AsyncHttp_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AsyncHttp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AsyncHttp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncHttp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncHttp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AsyncHttp_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_484b684992387090_100_boot)
HXDLIN( 100)		_map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_484b684992387090_102_boot)
HXDLIN( 102)		_count = 0;
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace utils
