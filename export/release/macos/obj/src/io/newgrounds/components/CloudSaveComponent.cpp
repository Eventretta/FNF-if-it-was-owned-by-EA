#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_e5475907ebbf9c90_17_new,"io.newgrounds.components.CloudSaveComponent","new",0x0f812a3b,"io.newgrounds.components.CloudSaveComponent.new","io/newgrounds/components/CloudSaveComponent.hx",17,0x269a6d94)
HX_LOCAL_STACK_FRAME(_hx_pos_e5475907ebbf9c90_26_clearSlot,"io.newgrounds.components.CloudSaveComponent","clearSlot",0x78297646,"io.newgrounds.components.CloudSaveComponent.clearSlot","io/newgrounds/components/CloudSaveComponent.hx",26,0x269a6d94)
HX_LOCAL_STACK_FRAME(_hx_pos_e5475907ebbf9c90_37_loadSlot,"io.newgrounds.components.CloudSaveComponent","loadSlot",0xddedbb89,"io.newgrounds.components.CloudSaveComponent.loadSlot","io/newgrounds/components/CloudSaveComponent.hx",37,0x269a6d94)
HX_LOCAL_STACK_FRAME(_hx_pos_e5475907ebbf9c90_48_loadSlots,"io.newgrounds.components.CloudSaveComponent","loadSlots",0x52165cca,"io.newgrounds.components.CloudSaveComponent.loadSlots","io/newgrounds/components/CloudSaveComponent.hx",48,0x269a6d94)
HX_LOCAL_STACK_FRAME(_hx_pos_e5475907ebbf9c90_59_setData,"io.newgrounds.components.CloudSaveComponent","setData",0x73f67a47,"io.newgrounds.components.CloudSaveComponent.setData","io/newgrounds/components/CloudSaveComponent.hx",59,0x269a6d94)
HX_LOCAL_STACK_FRAME(_hx_pos_e5475907ebbf9c90_15_boot,"io.newgrounds.components.CloudSaveComponent","boot",0x799cc9f7,"io.newgrounds.components.CloudSaveComponent.boot","io/newgrounds/components/CloudSaveComponent.hx",15,0x269a6d94)
namespace io{
namespace newgrounds{
namespace components{

void CloudSaveComponent_obj::__construct( ::io::newgrounds::NGLite core){
            	HX_STACKFRAME(&_hx_pos_e5475907ebbf9c90_17_new)
HXDLIN(  17)		super::__construct(core);
            	}

Dynamic CloudSaveComponent_obj::__CreateEmpty() { return new CloudSaveComponent_obj; }

void *CloudSaveComponent_obj::_hx_vtable = 0;

Dynamic CloudSaveComponent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CloudSaveComponent_obj > _hx_result = new CloudSaveComponent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CloudSaveComponent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01d757ff) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01d757ff;
	} else {
		return inClassId==(int)0x1718a611;
	}
}

 ::io::newgrounds::Call CloudSaveComponent_obj::clearSlot(int id){
            	HX_GC_STACKFRAME(&_hx_pos_e5475907ebbf9c90_26_clearSlot)
HXDLIN(  26)		return  ::io::newgrounds::Call_obj::__alloc( HX_CTX ,this->_core,HX_("CloudSave.clearSlot",ef,11,31,17),true,null())->addComponentParameter(HX_("id",db,5b,00,00),id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CloudSaveComponent_obj,clearSlot,return )

 ::io::newgrounds::Call CloudSaveComponent_obj::loadSlot(int id){
            	HX_GC_STACKFRAME(&_hx_pos_e5475907ebbf9c90_37_loadSlot)
HXDLIN(  37)		return  ::io::newgrounds::Call_obj::__alloc( HX_CTX ,this->_core,HX_("CloudSave.loadSlot",00,08,c9,fe),true,null())->addComponentParameter(HX_("id",db,5b,00,00),id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CloudSaveComponent_obj,loadSlot,return )

 ::io::newgrounds::Call CloudSaveComponent_obj::loadSlots(){
            	HX_GC_STACKFRAME(&_hx_pos_e5475907ebbf9c90_48_loadSlots)
HXDLIN(  48)		return  ::io::newgrounds::Call_obj::__alloc( HX_CTX ,this->_core,HX_("CloudSave.loadSlots",73,f8,1d,f1),true,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(CloudSaveComponent_obj,loadSlots,return )

 ::io::newgrounds::Call CloudSaveComponent_obj::setData(::String data,int id){
            	HX_GC_STACKFRAME(&_hx_pos_e5475907ebbf9c90_59_setData)
HXDLIN(  59)		return  ::io::newgrounds::Call_obj::__alloc( HX_CTX ,this->_core,HX_("CloudSave.setData",b0,a9,84,6f),true,null())->addComponentParameter(HX_("data",2a,56,63,42),data,::io::newgrounds::components::CloudSaveComponent_obj::allowNull)->addComponentParameter(HX_("id",db,5b,00,00),id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CloudSaveComponent_obj,setData,return )

 ::Dynamic CloudSaveComponent_obj::allowNull;


::hx::ObjectPtr< CloudSaveComponent_obj > CloudSaveComponent_obj::__new( ::io::newgrounds::NGLite core) {
	::hx::ObjectPtr< CloudSaveComponent_obj > __this = new CloudSaveComponent_obj();
	__this->__construct(core);
	return __this;
}

::hx::ObjectPtr< CloudSaveComponent_obj > CloudSaveComponent_obj::__alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NGLite core) {
	CloudSaveComponent_obj *__this = (CloudSaveComponent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CloudSaveComponent_obj), true, "io.newgrounds.components.CloudSaveComponent"));
	*(void **)__this = CloudSaveComponent_obj::_hx_vtable;
	__this->__construct(core);
	return __this;
}

CloudSaveComponent_obj::CloudSaveComponent_obj()
{
}

::hx::Val CloudSaveComponent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return ::hx::Val( setData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadSlot") ) { return ::hx::Val( loadSlot_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearSlot") ) { return ::hx::Val( clearSlot_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadSlots") ) { return ::hx::Val( loadSlots_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CloudSaveComponent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"allowNull") ) { outValue = ( allowNull ); return true; }
	}
	return false;
}

bool CloudSaveComponent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"allowNull") ) { allowNull=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CloudSaveComponent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CloudSaveComponent_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CloudSaveComponent_obj::allowNull,HX_("allowNull",b0,e7,02,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CloudSaveComponent_obj_sMemberFields[] = {
	HX_("clearSlot",2b,c6,16,c0),
	HX_("loadSlot",44,af,f5,bc),
	HX_("loadSlots",af,ac,03,9a),
	HX_("setData",ec,96,e7,07),
	::String(null()) };

static void CloudSaveComponent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CloudSaveComponent_obj::allowNull,"allowNull");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CloudSaveComponent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CloudSaveComponent_obj::allowNull,"allowNull");
};

#endif

::hx::Class CloudSaveComponent_obj::__mClass;

static ::String CloudSaveComponent_obj_sStaticFields[] = {
	HX_("allowNull",b0,e7,02,b4),
	::String(null())
};

void CloudSaveComponent_obj::__register()
{
	CloudSaveComponent_obj _hx_dummy;
	CloudSaveComponent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.components.CloudSaveComponent",c9,f0,02,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CloudSaveComponent_obj::__GetStatic;
	__mClass->mSetStaticField = &CloudSaveComponent_obj::__SetStatic;
	__mClass->mMarkFunc = CloudSaveComponent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CloudSaveComponent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CloudSaveComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CloudSaveComponent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CloudSaveComponent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CloudSaveComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CloudSaveComponent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CloudSaveComponent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e5475907ebbf9c90_15_boot)
HXDLIN(  15)		allowNull =  ::Dynamic(::hx::Anon_obj::Create(0));
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace components
