#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
#ifndef INCLUDED_polymod_format_CSVParseFormat
#include <polymod/format/CSVParseFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4584945ff3f90518_32_new,"polymod.format.CSV","new",0x9493b4d9,"polymod.format.CSV.new","polymod/format/CSV.hx",32,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_100_destroy,"polymod.format.CSV","destroy",0x4c0441f3,"polymod.format.CSV.destroy","polymod/format/CSV.hx",100,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_114__parse,"polymod.format.CSV","_parse",0x1afe449b,"polymod.format.CSV._parse","polymod/format/CSV.hx",114,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_124_clearArray,"polymod.format.CSV","clearArray",0xf2b63973,"polymod.format.CSV.clearArray","polymod/format/CSV.hx",124,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_139_destroyThing,"polymod.format.CSV","destroyThing",0xa35fc4fb,"polymod.format.CSV.destroyThing","polymod/format/CSV.hx",139,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_152_getCells,"polymod.format.CSV","getCells",0x0a6ba102,"polymod.format.CSV.getCells","polymod/format/CSV.hx",152,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_178_getRows,"polymod.format.CSV","getRows",0x45afb9c8,"polymod.format.CSV.getRows","polymod/format/CSV.hx",178,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_190_processCells,"polymod.format.CSV","processCells",0xcd4b2c09,"polymod.format.CSV.processCells","polymod/format/CSV.hx",190,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_232_processRows,"polymod.format.CSV","processRows",0x8924aca1,"polymod.format.CSV.processRows","polymod/format/CSV.hx",232,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_49_parse,"polymod.format.CSV","parse",0xccb244ec,"polymod.format.CSV.parse","polymod/format/CSV.hx",49,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_62_parseWithFormat,"polymod.format.CSV","parseWithFormat",0x20c3e9e9,"polymod.format.CSV.parseWithFormat","polymod/format/CSV.hx",62,0xda8f32d7)
HX_LOCAL_STACK_FRAME(_hx_pos_4584945ff3f90518_80_parseSimple,"polymod.format.CSV","parseSimple",0x549a363e,"polymod.format.CSV.parseSimple","polymod/format/CSV.hx",80,0xda8f32d7)
namespace polymod{
namespace format{

void CSV_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_32_new)
HXLINE( 111)		this->_quoted = false;
HXLINE( 110)		this->_delimeter = HX_("",00,00,00,00);
HXLINE( 108)		this->_rgx = null();
            	}

Dynamic CSV_obj::__CreateEmpty() { return new CSV_obj; }

void *CSV_obj::_hx_vtable = 0;

Dynamic CSV_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CSV_obj > _hx_result = new CSV_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CSV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37ab9499;
}

void CSV_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_100_destroy)
HXLINE( 101)		this->clearArray(this->grid);
HXLINE( 102)		this->clearArray(this->fields);
HXLINE( 103)		this->grid = null();
HXLINE( 104)		this->fields = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(CSV_obj,destroy,(void))

void CSV_obj::_parse(::String input,::String __o_delimeter,::hx::Null< bool >  __o_quoted){
            		::String delimeter = __o_delimeter;
            		if (::hx::IsNull(__o_delimeter)) delimeter = HX_(",",2c,00,00,00);
            		bool quoted = __o_quoted.Default(true);
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_114__parse)
HXLINE( 115)		this->_delimeter = delimeter;
HXLINE( 116)		this->_quoted = quoted;
HXLINE( 117)		if ((input != HX_("",00,00,00,00))) {
HXLINE( 119)			this->processRows(this->getRows(input));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSV_obj,_parse,(void))

void CSV_obj::clearArray(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_124_clearArray)
HXLINE( 125)		if (::hx::IsNull( array )) {
HXLINE( 126)			return;
            		}
HXLINE( 127)		int i = (array->get_length() - 1);
HXLINE( 128)		while((i >= 0)){
HXLINE( 130)			this->destroyThing(array->__get(i));
HXLINE( 131)			array->set(i,null());
HXLINE( 132)			array->splice(i,1);
HXLINE( 133)			i = (i - 1);
            		}
HXLINE( 135)		array = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,clearArray,(void))

void CSV_obj::destroyThing( ::Dynamic thing){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_139_destroyThing)
HXLINE( 140)		if (::hx::IsNull( thing )) {
HXLINE( 141)			return;
            		}
HXLINE( 143)		if (::Std_obj::isOfType(thing,::hx::ArrayBase::__mClass)) {
HXLINE( 145)			this->clearArray(( (::cpp::VirtualArray)(thing) ));
            		}
HXLINE( 148)		thing = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,destroyThing,(void))

::Array< ::String > CSV_obj::getCells(::String row){
            	HX_GC_STACKFRAME(&_hx_pos_4584945ff3f90518_152_getCells)
HXLINE( 153)		if (::hx::IsNull( this->_rgx )) {
HXLINE( 156)			::String _hx_tmp = row.charAt((row.length - 1));
HXDLIN( 156)			if ((_hx_tmp == this->_delimeter)) {
HXLINE( 158)				row = row.substr(0,(row.length - 1));
            			}
HXLINE( 161)			if ((this->_delimeter == HX_(",",2c,00,00,00))) {
HXLINE( 163)				this->_rgx =  ::EReg_obj::__alloc( HX_CTX ,HX_(",(?=(?:[^\\x22]*\\x22[^\\x22]*\\x22)*(?![^\\x22]*\\x22))",78,aa,0d,3d),HX_("gm",26,5a,00,00));
            			}
            			else {
HXLINE( 171)				this->_rgx =  ::EReg_obj::__alloc( HX_CTX ,(this->_delimeter + HX_("(?=(?:[^\"]*\"[^\"]*\")*(?![^\"]*\"))",56,98,5a,ba)),HX_("gm",26,5a,00,00));
            			}
            		}
HXLINE( 174)		return this->_rgx->split(row);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,getCells,return )

::Array< ::String > CSV_obj::getRows(::String input){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_178_getRows)
HXLINE( 179)		::String endl = HX_("\r\n",5d,0b,00,00);
HXLINE( 181)		if ((input.indexOf(HX_("\r\n",5d,0b,00,00),null()) == -1)) {
HXLINE( 183)			endl = HX_("\n",0a,00,00,00);
            		}
HXLINE( 186)		return input.split(endl);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,getRows,return )

void CSV_obj::processCells(::Array< ::String > cells,::hx::Null< int >  __o_row){
            		int row = __o_row.Default(0);
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_190_processCells)
HXLINE( 191)		int col = 0;
HXLINE( 192)		bool newline = false;
HXLINE( 193)		::Array< ::String > row_array = null();
HXLINE( 195)		if (::hx::IsNull( this->grid )) {
HXLINE( 197)			this->grid = ::Array_obj< ::Dynamic>::__new();
HXLINE( 198)			this->fields = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 201)		row_array = ::Array_obj< ::String >::__new(0);
HXLINE( 203)		{
HXLINE( 203)			int _g = 0;
HXDLIN( 203)			int _g1 = cells->length;
HXDLIN( 203)			while((_g < _g1)){
HXLINE( 203)				_g = (_g + 1);
HXDLIN( 203)				int i = (_g - 1);
HXLINE( 205)				::String cell = HX_("",00,00,00,00);
HXLINE( 206)				if (this->_quoted) {
HXLINE( 208)					cell = cells->__get(i).substr(1,(cells->__get(i).length - 2));
            				}
            				else {
HXLINE( 212)					cell = cells->__get(i);
            				}
HXLINE( 215)				if ((row == 0)) {
HXLINE( 217)					this->fields->push(cell);
            				}
            				else {
HXLINE( 221)					row_array->push(cell);
            				}
            			}
            		}
HXLINE( 225)		this->grid->push(row_array);
HXLINE( 226)		this->clearArray(cells);
HXLINE( 227)		cells = null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(CSV_obj,processCells,(void))

void CSV_obj::processRows(::Array< ::String > rows){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_232_processRows)
HXDLIN( 232)		int _g = 0;
HXDLIN( 232)		int _g1 = rows->length;
HXDLIN( 232)		while((_g < _g1)){
HXDLIN( 232)			_g = (_g + 1);
HXDLIN( 232)			int i = (_g - 1);
HXLINE( 234)			this->processCells(this->getCells(rows->__get(i)),i);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,processRows,(void))

 ::polymod::format::CSV CSV_obj::parse(::String input,::String __o_delimeter,::hx::Null< bool >  __o_quotedCells){
            		::String delimeter = __o_delimeter;
            		if (::hx::IsNull(__o_delimeter)) delimeter = HX_(",",2c,00,00,00);
            		bool quotedCells = __o_quotedCells.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_4584945ff3f90518_49_parse)
HXLINE(  50)		 ::polymod::format::CSV csv =  ::polymod::format::CSV_obj::__alloc( HX_CTX );
HXLINE(  51)		csv->_parse(input,delimeter,quotedCells);
HXLINE(  52)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CSV_obj,parse,return )

 ::polymod::format::CSV CSV_obj::parseWithFormat(::String input, ::polymod::format::CSVParseFormat format){
            	HX_STACKFRAME(&_hx_pos_4584945ff3f90518_62_parseWithFormat)
HXDLIN(  62)		if (format->get_isSimpleMode()) {
HXLINE(  64)			return ::polymod::format::CSV_obj::parseSimple(input);
            		}
            		else {
HXLINE(  68)			return ::polymod::format::CSV_obj::parse(input,format->delimeter,format->quotedCells);
            		}
HXLINE(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CSV_obj,parseWithFormat,return )

 ::polymod::format::CSV CSV_obj::parseSimple(::String input){
            	HX_GC_STACKFRAME(&_hx_pos_4584945ff3f90518_80_parseSimple)
HXLINE(  81)		::String endline = HX_("\n",0a,00,00,00);
HXLINE(  82)		if ((input.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE(  83)			endline = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE(  84)		::Array< ::String > lines = input.split(endline);
HXLINE(  85)		::String fieldLine = ( (::String)(lines->shift()) );
HXLINE(  86)		::Array< ::String > fields = fieldLine.split(HX_(",",2c,00,00,00));
HXLINE(  87)		::Array< ::Dynamic> grid = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  88)		{
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			while((_g < lines->length)){
HXLINE(  88)				::String line = lines->__get(_g);
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  90)				::Array< ::String > cells = line.split(HX_(",",2c,00,00,00));
HXLINE(  91)				grid->push(cells);
            			}
            		}
HXLINE(  93)		 ::polymod::format::CSV csv =  ::polymod::format::CSV_obj::__alloc( HX_CTX );
HXLINE(  94)		csv->fields = fields;
HXLINE(  95)		csv->grid = grid;
HXLINE(  96)		return csv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CSV_obj,parseSimple,return )


::hx::ObjectPtr< CSV_obj > CSV_obj::__new() {
	::hx::ObjectPtr< CSV_obj > __this = new CSV_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CSV_obj > CSV_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CSV_obj *__this = (CSV_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CSV_obj), true, "polymod.format.CSV"));
	*(void **)__this = CSV_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CSV_obj::CSV_obj()
{
}

void CSV_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSV);
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(_rgx,"_rgx");
	HX_MARK_MEMBER_NAME(_delimeter,"_delimeter");
	HX_MARK_MEMBER_NAME(_quoted,"_quoted");
	HX_MARK_END_CLASS();
}

void CSV_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(_rgx,"_rgx");
	HX_VISIT_MEMBER_NAME(_delimeter,"_delimeter");
	HX_VISIT_MEMBER_NAME(_quoted,"_quoted");
}

::hx::Val CSV_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return ::hx::Val( grid ); }
		if (HX_FIELD_EQ(inName,"_rgx") ) { return ::hx::Val( _rgx ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return ::hx::Val( fields ); }
		if (HX_FIELD_EQ(inName,"_parse") ) { return ::hx::Val( _parse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"_quoted") ) { return ::hx::Val( _quoted ); }
		if (HX_FIELD_EQ(inName,"getRows") ) { return ::hx::Val( getRows_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getCells") ) { return ::hx::Val( getCells_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_delimeter") ) { return ::hx::Val( _delimeter ); }
		if (HX_FIELD_EQ(inName,"clearArray") ) { return ::hx::Val( clearArray_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processRows") ) { return ::hx::Val( processRows_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyThing") ) { return ::hx::Val( destroyThing_dyn() ); }
		if (HX_FIELD_EQ(inName,"processCells") ) { return ::hx::Val( processCells_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CSV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseSimple") ) { outValue = parseSimple_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseWithFormat") ) { outValue = parseWithFormat_dyn(); return true; }
	}
	return false;
}

::hx::Val CSV_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rgx") ) { _rgx=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_quoted") ) { _quoted=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_delimeter") ) { _delimeter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CSV_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fields",79,8e,8e,80));
	outFields->push(HX_("grid",c6,d6,6b,44));
	outFields->push(HX_("_rgx",24,20,22,3f));
	outFields->push(HX_("_delimeter",4c,a8,25,df));
	outFields->push(HX_("_quoted",47,c3,63,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CSV_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(CSV_obj,fields),HX_("fields",79,8e,8e,80)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CSV_obj,grid),HX_("grid",c6,d6,6b,44)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(CSV_obj,_rgx),HX_("_rgx",24,20,22,3f)},
	{::hx::fsString,(int)offsetof(CSV_obj,_delimeter),HX_("_delimeter",4c,a8,25,df)},
	{::hx::fsBool,(int)offsetof(CSV_obj,_quoted),HX_("_quoted",47,c3,63,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CSV_obj_sStaticStorageInfo = 0;
#endif

static ::String CSV_obj_sMemberFields[] = {
	HX_("fields",79,8e,8e,80),
	HX_("grid",c6,d6,6b,44),
	HX_("destroy",fa,2c,86,24),
	HX_("_rgx",24,20,22,3f),
	HX_("_delimeter",4c,a8,25,df),
	HX_("_quoted",47,c3,63,44),
	HX_("_parse",74,d7,3c,b9),
	HX_("clearArray",cc,ac,99,fa),
	HX_("destroyThing",94,80,89,01),
	HX_("getCells",1b,5c,97,a3),
	HX_("getRows",cf,a4,31,1e),
	HX_("processCells",a2,e7,74,2b),
	HX_("processRows",28,27,46,68),
	::String(null()) };

::hx::Class CSV_obj::__mClass;

static ::String CSV_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	HX_("parseWithFormat",f0,b3,42,42),
	HX_("parseSimple",c5,b0,bb,33),
	::String(null())
};

void CSV_obj::__register()
{
	CSV_obj _hx_dummy;
	CSV_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.CSV",67,54,d8,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CSV_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CSV_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CSV_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CSV_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSV_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
