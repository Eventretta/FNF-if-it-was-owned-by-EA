#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
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
#ifndef INCLUDED_io_newgrounds_utils_Dispatcher
#include <io/newgrounds/utils/Dispatcher.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_RawSaveSlotList
#include <io/newgrounds/utils/RawSaveSlotList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_40_new,"io.newgrounds.utils.RawSaveSlotList","new",0x7bd378bc,"io.newgrounds.utils.RawSaveSlotList.new","io/newgrounds/utils/SaveSlotList.hx",40,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_49_loadList,"io.newgrounds.utils.RawSaveSlotList","loadList",0xede777c8,"io.newgrounds.utils.RawSaveSlotList.loadList","io/newgrounds/utils/SaveSlotList.hx",49,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_50_loadList,"io.newgrounds.utils.RawSaveSlotList","loadList",0xede777c8,"io.newgrounds.utils.RawSaveSlotList.loadList","io/newgrounds/utils/SaveSlotList.hx",50,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_43_loadList,"io.newgrounds.utils.RawSaveSlotList","loadList",0xede777c8,"io.newgrounds.utils.RawSaveSlotList.loadList","io/newgrounds/utils/SaveSlotList.hx",43,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_58_onSaveSlotsReceived,"io.newgrounds.utils.RawSaveSlotList","onSaveSlotsReceived",0x16b0adb6,"io.newgrounds.utils.RawSaveSlotList.onSaveSlotsReceived","io/newgrounds/utils/SaveSlotList.hx",58,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_96_onSaveSlotsReceived,"io.newgrounds.utils.RawSaveSlotList","onSaveSlotsReceived",0x16b0adb6,"io.newgrounds.utils.RawSaveSlotList.onSaveSlotsReceived","io/newgrounds/utils/SaveSlotList.hx",96,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_124_loadAllFiles,"io.newgrounds.utils.RawSaveSlotList","loadAllFiles",0x48f3f600,"io.newgrounds.utils.RawSaveSlotList.loadAllFiles","io/newgrounds/utils/SaveSlotList.hx",124,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_113_loadAllFiles,"io.newgrounds.utils.RawSaveSlotList","loadAllFiles",0x48f3f600,"io.newgrounds.utils.RawSaveSlotList.loadAllFiles","io/newgrounds/utils/SaveSlotList.hx",113,0x8b4b00ed)
static const int _hx_array_data_3709aaca_11[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_171_keys,"io.newgrounds.utils.RawSaveSlotList","keys",0xdb3a8a18,"io.newgrounds.utils.RawSaveSlotList.keys","io/newgrounds/utils/SaveSlotList.hx",171,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_178_iterator,"io.newgrounds.utils.RawSaveSlotList","iterator",0xc92ed412,"io.newgrounds.utils.RawSaveSlotList.iterator","io/newgrounds/utils/SaveSlotList.hx",178,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_185_keyValueIterator,"io.newgrounds.utils.RawSaveSlotList","keyValueIterator",0x01101b84,"io.newgrounds.utils.RawSaveSlotList.keyValueIterator","io/newgrounds/utils/SaveSlotList.hx",185,0x8b4b00ed)
HX_LOCAL_STACK_FRAME(_hx_pos_6cdf3e2b86ba014f_187_noCallback,"io.newgrounds.utils.RawSaveSlotList","noCallback",0x9acaba4a,"io.newgrounds.utils.RawSaveSlotList.noCallback","io/newgrounds/utils/SaveSlotList.hx",187,0x8b4b00ed)
namespace io{
namespace newgrounds{
namespace utils{

void RawSaveSlotList_obj::__construct( ::io::newgrounds::NG core){
            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_40_new)
HXDLIN(  40)		this->core = core;
            	}

Dynamic RawSaveSlotList_obj::__CreateEmpty() { return new RawSaveSlotList_obj; }

void *RawSaveSlotList_obj::_hx_vtable = 0;

Dynamic RawSaveSlotList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RawSaveSlotList_obj > _hx_result = new RawSaveSlotList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RawSaveSlotList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x096a474a;
}

void RawSaveSlotList_obj::loadList(::hx::Null< bool >  __o_loadFiles, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::utils::RawSaveSlotList,_gthis,::Array< ::Dynamic>,callback1,bool,loadFiles) HXARGC(1)
            		void _hx_run( ::Dynamic response){
            			HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_49_loadList)
HXLINE(  49)			_gthis->onSaveSlotsReceived(response,loadFiles,callback1->__get(0));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,callback1) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_50_loadList)
HXLINE(  50)			::String _hx_tmp;
HXDLIN(  50)			if (::hx::IsNotNull( e->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic) )) {
HXLINE(  50)				_hx_tmp = ( (::String)(((HX_("#",23,00,00,00) + e->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic)) + HX_(" - ",73,6f,18,00))) );
            			}
            			else {
HXLINE(  50)				_hx_tmp = HX_("",00,00,00,00);
            			}
HXDLIN(  50)			callback1->__get(0)(::io::newgrounds::objects::events::ResultType_obj::Error( ::Dynamic((_hx_tmp + e->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool loadFiles = __o_loadFiles.Default(false);
            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_43_loadList)
HXDLIN(  43)		::Array< ::Dynamic> callback1 = ::Array_obj< ::Dynamic>::__new(1)->init(0,callback);
HXDLIN(  43)		 ::io::newgrounds::utils::RawSaveSlotList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		if (::hx::IsNull( callback1->__get(0) )) {
HXLINE(  46)			callback1[0] = ::io::newgrounds::utils::RawSaveSlotList_obj::noCallback_dyn();
            		}
HXLINE(  48)		this->core->calls->cloudSave->loadSlots()->addDataHandler( ::Dynamic(new _hx_Closure_0(_gthis,callback1,loadFiles)))->addErrorHandler( ::Dynamic(new _hx_Closure_1(callback1)))->send();
            	}


HX_DEFINE_DYNAMIC_FUNC2(RawSaveSlotList_obj,loadList,(void))

void RawSaveSlotList_obj::onSaveSlotsReceived( ::Dynamic response,bool loadFiles, ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_58_onSaveSlotsReceived)
HXDLIN(  58)		 ::io::newgrounds::utils::RawSaveSlotList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  60)		if (!(( (bool)(response->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ))) {
HXLINE(  62)			 ::Dynamic this1 = response->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
HXDLIN(  62)			::String _hx_tmp;
HXDLIN(  62)			if (::hx::IsNotNull( this1->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic) )) {
HXLINE(  62)				_hx_tmp = ( (::String)(((HX_("#",23,00,00,00) + this1->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic)) + HX_(" - ",73,6f,18,00))) );
            			}
            			else {
HXLINE(  62)				_hx_tmp = HX_("",00,00,00,00);
            			}
HXDLIN(  62)			callback(::io::newgrounds::objects::events::ResultType_obj::Error( ::Dynamic((_hx_tmp + this1->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)))));
HXLINE(  63)			return;
            		}
HXLINE(  66)		if (!(( (bool)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("success",c3,25,4e,b8),::hx::paccDynamic)) ))) {
HXLINE(  68)			 ::Dynamic this1 =  ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),::hx::paccDynamic);
HXDLIN(  68)			::String _hx_tmp;
HXDLIN(  68)			if (::hx::IsNotNull( this1->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic) )) {
HXLINE(  68)				_hx_tmp = ( (::String)(((HX_("#",23,00,00,00) + this1->__Field(HX_("code",2d,b1,c4,41),::hx::paccDynamic)) + HX_(" - ",73,6f,18,00))) );
            			}
            			else {
HXLINE(  68)				_hx_tmp = HX_("",00,00,00,00);
            			}
HXDLIN(  68)			callback(::io::newgrounds::objects::events::ResultType_obj::Error( ::Dynamic((_hx_tmp + this1->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic)))));
HXLINE(  69)			return;
            		}
HXLINE(  72)		::Array< int > idList = ::Array_obj< int >::__new();
HXLINE(  74)		if (::hx::IsNull( this->map )) {
HXLINE(  75)			this->map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic( ::Dynamic(response->__Field(HX_("result",dd,68,84,08),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic))->__Field(HX_("slots",b5,60,cc,7e),::hx::paccDynamic)) );
HXDLIN(  77)			while((_g < _g1->length)){
HXLINE(  77)				 ::Dynamic slotData = _g1->__get(_g);
HXDLIN(  77)				_g = (_g + 1);
HXLINE(  79)				int id = ( (int)(slotData->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic)) );
HXLINE(  80)				if ((this->map->exists(id) == false)) {
HXLINE(  82)					 ::io::newgrounds::objects::SaveSlot slot =  ::io::newgrounds::objects::SaveSlot_obj::__alloc( HX_CTX ,this->core,slotData);
HXLINE(  83)					this->map->set(id,slot);
            				}
            				else {
HXLINE(  86)					( ( ::io::newgrounds::objects::Object)(this->map->get(id)) )->parse(slotData);
            				}
HXLINE(  88)				idList->push(id);
            			}
            		}
HXLINE(  91)		{
HXLINE(  91)			 ::io::newgrounds::NG _this = this->core;
HXDLIN(  91)			::String any = ((HX_("",00,00,00,00) + idList->length) + HX_(" SaveSlots received [",c4,e2,e6,1e));
HXDLIN(  91)			 ::Dynamic any1 = ((any + idList->join(HX_(", ",74,26,00,00))) + HX_("]",5d,00,00,00));
HXDLIN(  91)			if (_this->verbose) {
HXLINE(  91)				_this->log(any1,::hx::SourceInfo(HX_("io/newgrounds/utils/SaveSlotList.hx",ed,00,4b,8b),91,HX_("io.newgrounds.utils.RawSaveSlotList",ca,aa,09,37),HX_("onSaveSlotsReceived",5a,8d,c1,5b)));
            			}
            		}
HXLINE(  93)		if (loadFiles) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::io::newgrounds::utils::RawSaveSlotList,_gthis, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::io::newgrounds::objects::events::ResultType result){
            				HX_GC_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_96_onSaveSlotsReceived)
HXLINE(  98)				callback(result);
HXLINE(  99)				_gthis->core->onSaveSlotsLoaded->dispatch();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  96)			this->loadAllFiles( ::Dynamic(new _hx_Closure_0(_gthis,callback)));
            		}
            		else {
HXLINE( 104)			callback(::io::newgrounds::objects::events::ResultType_obj::Success_dyn());
HXLINE( 105)			this->core->onSaveSlotsLoaded->dispatch();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(RawSaveSlotList_obj,onSaveSlotsReceived,(void))

void RawSaveSlotList_obj::loadAllFiles( ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< int >,slotsToLoad, ::Dynamic,callback,::Array< ::Dynamic>,result) HXARGC(1)
            		void _hx_run( ::io::newgrounds::objects::events::TypedResultType slotResult){
            			HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_124_loadAllFiles)
HXLINE( 127)			if (::hx::IsPointerEq( result->__get(0).StaticCast<  ::io::newgrounds::objects::events::ResultType >(),::io::newgrounds::objects::events::ResultType_obj::Success_dyn() )) {
HXLINE( 129)				switch((int)(slotResult->_hx_getIndex())){
            					case (int)0: {
HXLINE( 132)						::String e = slotResult->_hx_getString(0);
HXLINE( 133)						result[0] = ::io::newgrounds::objects::events::ResultType_obj::Error(e);
            					}
            					break;
            					case (int)1: {
HXLINE( 131)						::String _g = ( (::String)(slotResult->_hx_getObject(0)) );
            					}
            					break;
            				}
            			}
HXLINE( 138)			slotsToLoad[0]--;
HXLINE( 139)			if ((slotsToLoad->__get(0) == 0)) {
HXLINE( 140)				callback(result->__get(0).StaticCast<  ::io::newgrounds::objects::events::ResultType >());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_113_loadAllFiles)
HXLINE( 115)		if (::hx::IsNull( this->map )) {
HXLINE( 118)			this->loadList(true,callback);
HXLINE( 119)			return;
            		}
HXLINE( 122)		::Array< int > slotsToLoad = ::Array_obj< int >::fromData( _hx_array_data_3709aaca_11,1);
HXLINE( 123)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(1)->init(0,::io::newgrounds::objects::events::ResultType_obj::Success_dyn());
HXLINE( 124)		 ::Dynamic onSlotLoad =  ::Dynamic(new _hx_Closure_0(slotsToLoad,callback,result));
HXLINE( 147)		{
HXLINE( 147)			 ::Dynamic slot = this->map->iterator();
HXDLIN( 147)			while(( (bool)(slot->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 147)				 ::io::newgrounds::objects::SaveSlot slot1 = ( ( ::io::newgrounds::objects::SaveSlot)(slot->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 149)				if ((::hx::IsNull( slot1->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic) ) == false)) {
HXLINE( 150)					slotsToLoad[0]++;
            				}
            			}
            		}
HXLINE( 153)		if ((slotsToLoad->__get(0) == 0)) {
HXLINE( 155)			callback(::io::newgrounds::objects::events::ResultType_obj::Success_dyn());
HXLINE( 156)			return;
            		}
HXLINE( 159)		{
HXLINE( 159)			 ::Dynamic slot1 = this->map->iterator();
HXDLIN( 159)			while(( (bool)(slot1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 159)				 ::io::newgrounds::objects::SaveSlot slot = ( ( ::io::newgrounds::objects::SaveSlot)(slot1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 161)				if ((::hx::IsNull( slot->_data->__Field(HX_("url",6f,2b,59,00),::hx::paccDynamic) ) == false)) {
HXLINE( 162)					slot->load(onSlotLoad);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RawSaveSlotList_obj,loadAllFiles,(void))

 ::Dynamic RawSaveSlotList_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_171_keys)
HXDLIN( 171)		return this->map->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RawSaveSlotList_obj,keys,return )

 ::Dynamic RawSaveSlotList_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_178_iterator)
HXDLIN( 178)		return this->map->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(RawSaveSlotList_obj,iterator,return )

 ::Dynamic RawSaveSlotList_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_185_keyValueIterator)
HXDLIN( 185)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,this->map);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RawSaveSlotList_obj,keyValueIterator,return )

void RawSaveSlotList_obj::noCallback( ::io::newgrounds::objects::events::ResultType r){
            	HX_STACKFRAME(&_hx_pos_6cdf3e2b86ba014f_187_noCallback)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RawSaveSlotList_obj,noCallback,(void))


::hx::ObjectPtr< RawSaveSlotList_obj > RawSaveSlotList_obj::__new( ::io::newgrounds::NG core) {
	::hx::ObjectPtr< RawSaveSlotList_obj > __this = new RawSaveSlotList_obj();
	__this->__construct(core);
	return __this;
}

::hx::ObjectPtr< RawSaveSlotList_obj > RawSaveSlotList_obj::__alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NG core) {
	RawSaveSlotList_obj *__this = (RawSaveSlotList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RawSaveSlotList_obj), true, "io.newgrounds.utils.RawSaveSlotList"));
	*(void **)__this = RawSaveSlotList_obj::_hx_vtable;
	__this->__construct(core);
	return __this;
}

RawSaveSlotList_obj::RawSaveSlotList_obj()
{
}

void RawSaveSlotList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RawSaveSlotList);
	HX_MARK_MEMBER_NAME(core,"core");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void RawSaveSlotList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(core,"core");
	HX_VISIT_MEMBER_NAME(map,"map");
}

::hx::Val RawSaveSlotList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { return ::hx::Val( core ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadList") ) { return ::hx::Val( loadList_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadAllFiles") ) { return ::hx::Val( loadAllFiles_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onSaveSlotsReceived") ) { return ::hx::Val( onSaveSlotsReceived_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RawSaveSlotList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"noCallback") ) { outValue = noCallback_dyn(); return true; }
	}
	return false;
}

::hx::Val RawSaveSlotList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"core") ) { core=inValue.Cast<  ::io::newgrounds::NG >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RawSaveSlotList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("core",5f,bd,c4,41));
	outFields->push(HX_("map",9c,0a,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RawSaveSlotList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::io::newgrounds::NG */ ,(int)offsetof(RawSaveSlotList_obj,core),HX_("core",5f,bd,c4,41)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(RawSaveSlotList_obj,map),HX_("map",9c,0a,53,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RawSaveSlotList_obj_sStaticStorageInfo = 0;
#endif

static ::String RawSaveSlotList_obj_sMemberFields[] = {
	HX_("core",5f,bd,c4,41),
	HX_("map",9c,0a,53,00),
	HX_("loadList",a4,ed,52,b8),
	HX_("onSaveSlotsReceived",5a,8d,c1,5b),
	HX_("loadAllFiles",dc,89,e5,b2),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	::String(null()) };

::hx::Class RawSaveSlotList_obj::__mClass;

static ::String RawSaveSlotList_obj_sStaticFields[] = {
	HX_("noCallback",26,5f,64,6f),
	::String(null())
};

void RawSaveSlotList_obj::__register()
{
	RawSaveSlotList_obj _hx_dummy;
	RawSaveSlotList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.utils.RawSaveSlotList",ca,aa,09,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RawSaveSlotList_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(RawSaveSlotList_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RawSaveSlotList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RawSaveSlotList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RawSaveSlotList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RawSaveSlotList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace utils
