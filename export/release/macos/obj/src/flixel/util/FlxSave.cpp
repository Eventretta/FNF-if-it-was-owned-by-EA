#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a670326751daced_45_new,"flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",45,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_53_destroy,"flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",53,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_73_bind,"flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",73,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_101_close,"flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",101,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_114_flush,"flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",114,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_141_erase,"flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",141,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_159_onDone,"flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",159,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_184_checkBinding,"flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",184,0xc43cd0a9)
namespace flixel{
namespace util{

void FlxSave_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_45_new)
HXDLIN(  45)		this->_closeRequested = false;
            	}

Dynamic FlxSave_obj::__CreateEmpty() { return new FlxSave_obj; }

void *FlxSave_obj::_hx_vtable = 0;

Dynamic FlxSave_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSave_obj > _hx_result = new FlxSave_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSave_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051f3151;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxSave_obj::destroy,
};

void *FlxSave_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSave_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_53_destroy)
HXLINE(  54)		this->_sharedObject = null();
HXLINE(  55)		this->name = null();
HXLINE(  56)		this->path = null();
HXLINE(  57)		this->data = null();
HXLINE(  58)		this->_onComplete = null();
HXLINE(  59)		this->_closeRequested = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind(::String Name,::String Path){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_73_bind)
HXLINE(  74)		this->destroy();
HXLINE(  75)		this->name = Name;
HXLINE(  76)		this->path = Path;
HXLINE(  77)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  79)			this->_sharedObject = ::openfl::net::SharedObject_obj::getLocal(this->name,this->path,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  81)				{
HXLINE(  81)					null();
            				}
HXLINE(  77)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE(  84)					this->destroy();
HXLINE(  85)					return false;
            				}
            				else {
HXLINE(  77)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  87)		this->data = this->_sharedObject->data;
HXLINE(  88)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,bind,return )

bool FlxSave_obj::close(::hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
            		int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_101_close)
HXLINE( 102)		this->_closeRequested = true;
HXLINE( 103)		return this->flush(MinFileSize,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush(::hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
            		int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_114_flush)
HXLINE( 115)		if (!(this->checkBinding())) {
HXLINE( 117)			return false;
            		}
HXLINE( 119)		this->_onComplete = OnComplete;
HXLINE( 120)		 ::Dynamic result = null();
HXLINE( 121)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 123)			result = this->_sharedObject->flush(null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 125)				{
HXLINE( 125)					null();
            				}
HXLINE( 121)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 127)					return this->onDone(::flixel::util::FlxSaveStatus_obj::ERROR_dyn());
            				}
            				else {
HXLINE( 121)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 130)		 ::flixel::util::FlxSaveStatus _hx_tmp;
HXDLIN( 130)		if (::hx::IsEq( result,0 )) {
HXLINE( 130)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn();
            		}
            		else {
HXLINE( 130)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::PENDING_dyn();
            		}
HXDLIN( 130)		return this->onDone(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_141_erase)
HXLINE( 142)		if (!(this->checkBinding())) {
HXLINE( 144)			return false;
            		}
HXLINE( 146)		this->_sharedObject->clear();
HXLINE( 147)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 148)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( ::flixel::util::FlxSaveStatus Result){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_159_onDone)
HXLINE( 160)		switch((int)(Result->_hx_getIndex())){
            			case (int)1: {
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 169)		if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 170)			this->_onComplete(::hx::IsPointerEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() ));
            		}
HXLINE( 172)		if (this->_closeRequested) {
HXLINE( 173)			this->destroy();
            		}
HXLINE( 175)		return ::hx::IsPointerEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_184_checkBinding)
HXLINE( 185)		if (::hx::IsNull( this->_sharedObject )) {
HXLINE( 188)			return false;
            		}
HXLINE( 190)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )


::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new() {
	::hx::ObjectPtr< FlxSave_obj > __this = new FlxSave_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSave_obj *__this = (FlxSave_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSave_obj), true, "flixel.util.FlxSave"));
	*(void **)__this = FlxSave_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

::hx::Val FlxSave_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return ::hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return ::hx::Val( onDone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return ::hx::Val( checkBinding_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return ::hx::Val( _sharedObject ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return ::hx::Val( _closeRequested ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSave_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast<  ::openfl::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_sharedObject",23,ee,9d,aa));
	outFields->push(HX_("_closeRequested",35,43,b2,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSave_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsString,(int)offsetof(FlxSave_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(FlxSave_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::openfl::net::SharedObject */ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_("_sharedObject",23,ee,9d,aa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_("_closeRequested",35,43,b2,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSave_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSave_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("name",4b,72,ff,48),
	HX_("path",a5,e5,51,4a),
	HX_("_sharedObject",23,ee,9d,aa),
	HX_("_onComplete",17,a2,08,30),
	HX_("_closeRequested",35,43,b2,fb),
	HX_("destroy",fa,2c,86,24),
	HX_("bind",bd,f5,16,41),
	HX_("close",b8,17,63,48),
	HX_("flush",c4,62,9b,02),
	HX_("erase",e6,e8,1c,73),
	HX_("onDone",41,f9,f7,e4),
	HX_("checkBinding",5d,43,b4,6c),
	::String(null()) };

::hx::Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	FlxSave_obj _hx_dummy;
	FlxSave_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSave",95,71,4e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSave_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSave_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSave_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
