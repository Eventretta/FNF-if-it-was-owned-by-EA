#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionCatagory
#include <OptionCatagory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41f5673017f13987_9_new,"OptionCatagory","new",0x38ff9e21,"OptionCatagory.new","Options.hx",9,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_41f5673017f13987_14_getOptions,"OptionCatagory","getOptions",0xb67f95c7,"OptionCatagory.getOptions","Options.hx",14,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_41f5673017f13987_19_addOption,"OptionCatagory","addOption",0x78511cf7,"OptionCatagory.addOption","Options.hx",19,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_41f5673017f13987_25_removeOption,"OptionCatagory","removeOption",0x0ebf60f8,"OptionCatagory.removeOption","Options.hx",25,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_41f5673017f13987_30_getName,"OptionCatagory","getName",0xcaee6442,"OptionCatagory.getName","Options.hx",30,0x9d9a0240)

void OptionCatagory_obj::__construct(::String catName,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_41f5673017f13987_9_new)
HXLINE(  28)		this->_name = HX_("New Catagory",fa,24,62,da);
HXLINE(  11)		this->_options = ::Array_obj< ::Dynamic>::__new();
HXLINE(  35)		this->_name = catName;
HXLINE(  36)		this->_options = options;
            	}

Dynamic OptionCatagory_obj::__CreateEmpty() { return new OptionCatagory_obj; }

void *OptionCatagory_obj::_hx_vtable = 0;

Dynamic OptionCatagory_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionCatagory_obj > _hx_result = new OptionCatagory_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionCatagory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5d1f7c6f;
}

::Array< ::Dynamic> OptionCatagory_obj::getOptions(){
            	HX_STACKFRAME(&_hx_pos_41f5673017f13987_14_getOptions)
HXDLIN(  14)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionCatagory_obj,getOptions,return )

void OptionCatagory_obj::addOption( ::Option opt){
            	HX_STACKFRAME(&_hx_pos_41f5673017f13987_19_addOption)
HXDLIN(  19)		this->_options->push(opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionCatagory_obj,addOption,(void))

void OptionCatagory_obj::removeOption( ::Option opt){
            	HX_STACKFRAME(&_hx_pos_41f5673017f13987_25_removeOption)
HXDLIN(  25)		this->_options->remove(opt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionCatagory_obj,removeOption,(void))

::String OptionCatagory_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_41f5673017f13987_30_getName)
HXDLIN(  30)		return this->_name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionCatagory_obj,getName,return )


::hx::ObjectPtr< OptionCatagory_obj > OptionCatagory_obj::__new(::String catName,::Array< ::Dynamic> options) {
	::hx::ObjectPtr< OptionCatagory_obj > __this = new OptionCatagory_obj();
	__this->__construct(catName,options);
	return __this;
}

::hx::ObjectPtr< OptionCatagory_obj > OptionCatagory_obj::__alloc(::hx::Ctx *_hx_ctx,::String catName,::Array< ::Dynamic> options) {
	OptionCatagory_obj *__this = (OptionCatagory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionCatagory_obj), true, "OptionCatagory"));
	*(void **)__this = OptionCatagory_obj::_hx_vtable;
	__this->__construct(catName,options);
	return __this;
}

OptionCatagory_obj::OptionCatagory_obj()
{
}

void OptionCatagory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionCatagory);
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_END_CLASS();
}

void OptionCatagory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(_name,"_name");
}

::hx::Val OptionCatagory_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { return ::hx::Val( _name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeOption") ) { return ::hx::Val( removeOption_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionCatagory_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionCatagory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("_name",2a,8e,10,fc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionCatagory_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OptionCatagory_obj,_options),HX_("_options",df,8c,b6,19)},
	{::hx::fsString,(int)offsetof(OptionCatagory_obj,_name),HX_("_name",2a,8e,10,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionCatagory_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionCatagory_obj_sMemberFields[] = {
	HX_("_options",df,8c,b6,19),
	HX_("getOptions",68,b9,5f,2f),
	HX_("addOption",76,08,9f,e3),
	HX_("removeOption",d9,6e,a8,9a),
	HX_("_name",2a,8e,10,fc),
	HX_("getName",01,22,82,1b),
	::String(null()) };

::hx::Class OptionCatagory_obj::__mClass;

void OptionCatagory_obj::__register()
{
	OptionCatagory_obj _hx_dummy;
	OptionCatagory_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionCatagory",af,f9,33,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionCatagory_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionCatagory_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionCatagory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionCatagory_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

