#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
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
#ifndef INCLUDED_io_newgrounds_components_CloudSaveComponent
#include <io/newgrounds/components/CloudSaveComponent.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_Component
#include <io/newgrounds/components/Component.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ComponentList
#include <io/newgrounds/components/ComponentList.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_SaveSlot
#include <io/newgrounds/objects/SaveSlot.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_events_ResultType
#include <io/newgrounds/objects/events/ResultType.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_events_TypedResultType
#include <io/newgrounds/objects/events/TypedResultType.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_AsyncHttp
#include <io/newgrounds/utils/AsyncHttp.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_Dispatcher
#include <io/newgrounds/utils/Dispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd1b94797377e676_59_new,"io.newgrounds.objects.SaveSlot","new",0x9a9cedc1,"io.newgrounds.objects.SaveSlot.new","io/newgrounds/objects/SaveSlot.hx",59,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_48_get_datetime,"io.newgrounds.objects.SaveSlot","get_datetime",0x44ae33c3,"io.newgrounds.objects.SaveSlot.get_datetime","io/newgrounds/objects/SaveSlot.hx",48,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_49_get_id,"io.newgrounds.objects.SaveSlot","get_id",0x47d4a863,"io.newgrounds.objects.SaveSlot.get_id","io/newgrounds/objects/SaveSlot.hx",49,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_50_get_size,"io.newgrounds.objects.SaveSlot","get_size",0x6b3a1f49,"io.newgrounds.objects.SaveSlot.get_size","io/newgrounds/objects/SaveSlot.hx",50,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_51_get_timestamp,"io.newgrounds.objects.SaveSlot","get_timestamp",0x1d28a94e,"io.newgrounds.objects.SaveSlot.get_timestamp","io/newgrounds/objects/SaveSlot.hx",51,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_52_get_url,"io.newgrounds.objects.SaveSlot","get_url",0x9247d5e7,"io.newgrounds.objects.SaveSlot.get_url","io/newgrounds/objects/SaveSlot.hx",52,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_77_save,"io.newgrounds.objects.SaveSlot","save",0xb1fe22bc,"io.newgrounds.objects.SaveSlot.save","io/newgrounds/objects/SaveSlot.hx",77,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_71_save,"io.newgrounds.objects.SaveSlot","save",0xb1fe22bc,"io.newgrounds.objects.SaveSlot.save","io/newgrounds/objects/SaveSlot.hx",71,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_90_clear,"io.newgrounds.objects.SaveSlot","clear",0xdd2f692e,"io.newgrounds.objects.SaveSlot.clear","io/newgrounds/objects/SaveSlot.hx",90,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_87_clear,"io.newgrounds.objects.SaveSlot","clear",0xdd2f692e,"io.newgrounds.objects.SaveSlot.clear","io/newgrounds/objects/SaveSlot.hx",87,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_98_setContentsOnSlotFetch,"io.newgrounds.objects.SaveSlot","setContentsOnSlotFetch",0xc05f3200,"io.newgrounds.objects.SaveSlot.setContentsOnSlotFetch","io/newgrounds/objects/SaveSlot.hx",98,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_102_setContentsOnSlotFetch,"io.newgrounds.objects.SaveSlot","setContentsOnSlotFetch",0xc05f3200,"io.newgrounds.objects.SaveSlot.setContentsOnSlotFetch","io/newgrounds/objects/SaveSlot.hx",102,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_127_load,"io.newgrounds.objects.SaveSlot","load",0xad6831a5,"io.newgrounds.objects.SaveSlot.load","io/newgrounds/objects/SaveSlot.hx",127,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_132_load,"io.newgrounds.objects.SaveSlot","load",0xad6831a5,"io.newgrounds.objects.SaveSlot.load","io/newgrounds/objects/SaveSlot.hx",132,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_119_load,"io.newgrounds.objects.SaveSlot","load",0xad6831a5,"io.newgrounds.objects.SaveSlot.load","io/newgrounds/objects/SaveSlot.hx",119,0x0f12c8ce)
HX_LOCAL_STACK_FRAME(_hx_pos_cd1b94797377e676_137_isEmpty,"io.newgrounds.objects.SaveSlot","isEmpty",0x77d9c024,"io.newgrounds.objects.SaveSlot.isEmpty","io/newgrounds/objects/SaveSlot.hx",137,0x0f12c8ce)
namespace io{
namespace newgrounds{
namespace objects{

void SaveSlot_obj::__construct( ::io::newgrounds::NGLite core, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_59_new)
HXDLIN(  59)		super::__construct(core,data);
            	}

Dynamic SaveSlot_obj::__CreateEmpty() { return new SaveSlot_obj; }

void *SaveSlot_obj::_hx_vtable = 0;

Dynamic SaveSlot_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveSlot_obj > _hx_result = new SaveSlot_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SaveSlot_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x596f3161) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x596f3161;
	} else {
		return inClassId==(int)0x758a96fd;
	}
}

::String SaveSlot_obj::get_datetime(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_48_get_datetime)
HXDLIN(  48)		return ( (::String)(this->_data->__Field(HX_("datetime",3b,d1,31,ef),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,get_datetime,return )

int SaveSlot_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_49_get_id)
HXDLIN(  49)		return ( (int)(this->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,get_id,return )

int SaveSlot_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_50_get_size)
HXDLIN(  50)		return ( (int)(this->_data->__Field(HX_("size",c1,a0,53,4c),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,get_size,return )

int SaveSlot_obj::get_timestamp(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_51_get_timestamp)
HXDLIN(  51)		return ( (int)(this->_data->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,get_timestamp,return )

::String SaveSlot_obj::get_url(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_52_get_url)
HXDLIN(  52)		return ( (::String)(this->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,get_url,return )

void SaveSlot_obj::save(::String data, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::objects::SaveSlot,_gthis,::String,data, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic response){
            			HX_STACKFRAME(&_hx_pos_cd1b94797377e676_77_save)
HXLINE(  77)			_gthis->setContentsOnSlotFetch(response,data,callback);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_71_save)
HXDLIN(  71)		 ::io::newgrounds::objects::SaveSlot _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  73)		if (::hx::IsNull( data )) {
HXLINE(  74)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("cannot save null to a SaveSlot",ac,71,a5,14)));
            		}
HXLINE(  76)		this->_core->calls->cloudSave->setData(data,( (int)(this->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))->addDataHandler( ::Dynamic(new _hx_Closure_0(_gthis,data,callback)))->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(SaveSlot_obj,save,(void))

void SaveSlot_obj::clear( ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::objects::SaveSlot,_gthis, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::Dynamic response){
            			HX_STACKFRAME(&_hx_pos_cd1b94797377e676_90_clear)
HXLINE(  90)			_gthis->setContentsOnSlotFetch(response,null(),callback);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_87_clear)
HXDLIN(  87)		 ::io::newgrounds::objects::SaveSlot _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  89)		this->_core->calls->cloudSave->clearSlot(( (int)(this->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) ))->addDataHandler( ::Dynamic(new _hx_Closure_0(_gthis,callback)))->send();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SaveSlot_obj,clear,(void))

void SaveSlot_obj::setContentsOnSlotFetch( ::Dynamic response,::String contents, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_98_setContentsOnSlotFetch)
HXLINE( 101)		if (::hx::IsNull( callback )) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::io::newgrounds::objects::events::ResultType _){
            				HX_STACKFRAME(&_hx_pos_cd1b94797377e676_102_setContentsOnSlotFetch)
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 102)			callback =  ::Dynamic(new _hx_Closure_0());
            		}
HXLINE( 104)		bool _hx_tmp;
HXDLIN( 104)		if (( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) )) {
HXLINE( 104)			_hx_tmp = ( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 104)			_hx_tmp = false;
            		}
HXDLIN( 104)		if (_hx_tmp) {
HXLINE( 106)			this->contents = contents;
HXLINE( 107)			this->parse( ::Dynamic( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("slot",fe,dd,55,4c),::hx::paccDynamic)));
            		}
HXLINE( 110)		callback(::io::newgrounds::objects::events::ResultType_obj::Success_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC3(SaveSlot_obj,setContentsOnSlotFetch,(void))

void SaveSlot_obj::load( ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::objects::SaveSlot,_gthis, ::Dynamic,callback) HXARGC(1)
            		void _hx_run(::String s){
            			HX_STACKFRAME(&_hx_pos_cd1b94797377e676_127_load)
HXLINE( 128)			_gthis->contents = s;
HXLINE( 129)			callback(::io::newgrounds::objects::events::TypedResultType_obj::Success(_gthis->contents));
HXLINE( 130)			_gthis->onUpdate->dispatch();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,callback) HXARGC(1)
            		void _hx_run(::String error){
            			HX_STACKFRAME(&_hx_pos_cd1b94797377e676_132_load)
HXLINE( 132)			callback(::io::newgrounds::objects::events::TypedResultType_obj::Error(error));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_119_load)
HXDLIN( 119)		 ::io::newgrounds::objects::SaveSlot _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 121)		if (::hx::IsNull( this->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic) )) {
HXLINE( 122)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic((HX_("Cannot load from an empty SaveSlot, id:",43,17,49,86) + this->_data->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)))));
            		}
HXLINE( 125)		::io::newgrounds::utils::AsyncHttp_obj::send(( (::String)(this->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic)) ),null(), ::Dynamic(new _hx_Closure_0(_gthis,callback)), ::Dynamic(new _hx_Closure_1(callback)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(SaveSlot_obj,load,(void))

bool SaveSlot_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_cd1b94797377e676_137_isEmpty)
HXDLIN( 137)		return ::hx::IsNull( this->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveSlot_obj,isEmpty,return )


::hx::ObjectPtr< SaveSlot_obj > SaveSlot_obj::__new( ::io::newgrounds::NGLite core, ::Dynamic data) {
	::hx::ObjectPtr< SaveSlot_obj > __this = new SaveSlot_obj();
	__this->__construct(core,data);
	return __this;
}

::hx::ObjectPtr< SaveSlot_obj > SaveSlot_obj::__alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NGLite core, ::Dynamic data) {
	SaveSlot_obj *__this = (SaveSlot_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveSlot_obj), true, "io.newgrounds.objects.SaveSlot"));
	*(void **)__this = SaveSlot_obj::_hx_vtable;
	__this->__construct(core,data);
	return __this;
}

SaveSlot_obj::SaveSlot_obj()
{
}

void SaveSlot_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SaveSlot);
	HX_MARK_MEMBER_NAME(contents,"contents");
	 ::io::newgrounds::objects::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SaveSlot_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contents,"contents");
	 ::io::newgrounds::objects::Object_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SaveSlot_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_url() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_url") ) { return ::hx::Val( get_url_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"datetime") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_datetime() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"contents") ) { return ::hx::Val( contents ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_timestamp() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_datetime") ) { return ::hx::Val( get_datetime_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_timestamp") ) { return ::hx::Val( get_timestamp_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setContentsOnSlotFetch") ) { return ::hx::Val( setContentsOnSlotFetch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SaveSlot_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contents") ) { contents=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SaveSlot_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("datetime",3b,d1,31,ef));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("timestamp",d6,d4,ce,a5));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("contents",1a,05,24,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SaveSlot_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(SaveSlot_obj,contents),HX_("contents",1a,05,24,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SaveSlot_obj_sStaticStorageInfo = 0;
#endif

static ::String SaveSlot_obj_sMemberFields[] = {
	HX_("get_datetime",44,85,4b,a4),
	HX_("get_id",24,f3,2f,a3),
	HX_("get_size",4a,5c,0e,cc),
	HX_("get_timestamp",ad,a8,32,67),
	HX_("get_url",06,f4,cd,26),
	HX_("contents",1a,05,24,2f),
	HX_("save",3d,8b,4d,4c),
	HX_("clear",8d,71,5b,48),
	HX_("setContentsOnSlotFetch",c1,ce,3f,f6),
	HX_("load",26,9a,b7,47),
	HX_("isEmpty",43,de,5f,0c),
	::String(null()) };

::hx::Class SaveSlot_obj::__mClass;

void SaveSlot_obj::__register()
{
	SaveSlot_obj _hx_dummy;
	SaveSlot_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.objects.SaveSlot",4f,f9,c8,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SaveSlot_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SaveSlot_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveSlot_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveSlot_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace objects
