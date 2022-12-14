#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_JSONParseFormat
#include <polymod/format/JSONParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8feeea0724e4c481_606_new,"polymod.format.JSONParseFormat","new",0xfff4bb35,"polymod.format.JSONParseFormat.new","polymod/format/ParseRules.hx",606,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_613_parse,"polymod.format.JSONParseFormat","parse",0x97269a48,"polymod.format.JSONParseFormat.parse","polymod/format/ParseRules.hx",613,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_619_append,"polymod.format.JSONParseFormat","append",0x4cebaa25,"polymod.format.JSONParseFormat.append","polymod/format/ParseRules.hx",619,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_644_merge,"polymod.format.JSONParseFormat","merge",0xdf97accd,"polymod.format.JSONParseFormat.merge","polymod/format/ParseRules.hx",644,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_700__mergeJson,"polymod.format.JSONParseFormat","_mergeJson",0xb107928c,"polymod.format.JSONParseFormat._mergeJson","polymod/format/ParseRules.hx",700,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_767__targSigElementToString,"polymod.format.JSONParseFormat","_targSigElementToString",0x44b7316d,"polymod.format.JSONParseFormat._targSigElementToString","polymod/format/ParseRules.hx",767,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_784__inject,"polymod.format.JSONParseFormat","_inject",0xbe18d585,"polymod.format.JSONParseFormat._inject","polymod/format/ParseRules.hx",784,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_822__mergeObjects,"polymod.format.JSONParseFormat","_mergeObjects",0x683b6ef0,"polymod.format.JSONParseFormat._mergeObjects","polymod/format/ParseRules.hx",822,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_874_copyVal,"polymod.format.JSONParseFormat","copyVal",0xfb3ed381,"polymod.format.JSONParseFormat.copyVal","polymod/format/ParseRules.hx",874,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_890_isPrimitive,"polymod.format.JSONParseFormat","isPrimitive",0xd2508732,"polymod.format.JSONParseFormat.isPrimitive","polymod/format/ParseRules.hx",890,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_915__descend,"polymod.format.JSONParseFormat","_descend",0x5bcab8b6,"polymod.format.JSONParseFormat._descend","polymod/format/ParseRules.hx",915,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_996__getTargetSignature,"polymod.format.JSONParseFormat","_getTargetSignature",0x1f3de665,"polymod.format.JSONParseFormat._getTargetSignature","polymod/format/ParseRules.hx",996,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_8feeea0724e4c481_1035_print,"polymod.format.JSONParseFormat","print",0xa25c6242,"polymod.format.JSONParseFormat.print","polymod/format/ParseRules.hx",1035,0xc5c5c43b)
namespace polymod{
namespace format{

void JSONParseFormat_obj::__construct(::String space, ::Dynamic replacer){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_606_new)
HXLINE( 607)		this->replacer = replacer;
HXLINE( 608)		this->space = space;
HXLINE( 609)		this->format = ::polymod::format::TextFileFormat_obj::JSON_dyn();
            	}

Dynamic JSONParseFormat_obj::__CreateEmpty() { return new JSONParseFormat_obj; }

void *JSONParseFormat_obj::_hx_vtable = 0;

Dynamic JSONParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JSONParseFormat_obj > _hx_result = new JSONParseFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool JSONParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14b3bff5;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_JSONParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::JSONParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::JSONParseFormat_obj::merge,
};

void *JSONParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_JSONParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic JSONParseFormat_obj::parse(::String str){
            	HX_GC_STACKFRAME(&_hx_pos_8feeea0724e4c481_613_parse)
HXLINE( 614)		 ::Dynamic result =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX , ::EReg_obj::__alloc( HX_CTX ,HX_("(\r|\n|\t)",29,6f,a8,1e),HX_("g",67,00,00,00))->replace(str,HX_("",00,00,00,00)))->doParse();
HXLINE( 615)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,parse,return )

::String JSONParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_619_append)
HXLINE( 620)		int lastBracket = ::polymod::util::Util_obj::uLastIndexOf(baseText,HX_("}",7d,00,00,00),null());
HXLINE( 621)		::String baseFirst = ::polymod::util::Util_obj::uSubstr(baseText,0,lastBracket);
HXLINE( 622)		::String baseEnd = ::polymod::util::Util_obj::uSubstr(baseText,lastBracket,baseText.length);
HXLINE( 624)		int firstAppendBracket = ::polymod::util::Util_obj::uIndexOf(appendText,HX_("{",7b,00,00,00),null());
HXLINE( 625)		int lastAppendBracket = ::polymod::util::Util_obj::uLastIndexOf(appendText,HX_("}",7d,00,00,00),null());
HXLINE( 626)		::String injectText = ::polymod::util::Util_obj::uSubstring(appendText,(firstAppendBracket + 1),lastAppendBracket);
HXLINE( 628)		bool _hx_tmp;
HXDLIN( 628)		if (::hx::IsNotNull( injectText )) {
HXLINE( 628)			_hx_tmp = (injectText == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 628)			_hx_tmp = true;
            		}
HXDLIN( 628)		if (_hx_tmp) {
HXLINE( 629)			return baseText;
            		}
HXLINE( 633)		baseFirst = ::polymod::util::Util_obj::uTrimFinalEndlines(baseFirst);
HXLINE( 634)		injectText = ::polymod::util::Util_obj::uTrimFinalEndlines(injectText);
HXLINE( 635)		injectText = ::polymod::util::Util_obj::uTrimFirstEndlines(injectText);
HXLINE( 636)		baseEnd = ::polymod::util::Util_obj::uTrimFinalEndlines(baseEnd);
HXLINE( 638)		::String comma = HX_(",",2c,00,00,00);
HXLINE( 640)		return ((((baseFirst + comma) + HX_("\n",0a,00,00,00)) + injectText) + baseEnd);
            	}


HX_DEFINE_DYNAMIC_FUNC3(JSONParseFormat_obj,append,return )

::String JSONParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_644_merge)
HXLINE( 645)		 ::Dynamic base = null();
HXLINE( 646)		 ::Dynamic merge = null();
HXLINE( 648)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 650)			base = this->parse(baseText);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 652)				{
HXLINE( 652)					null();
            				}
HXDLIN( 652)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 654)				::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),(((HX_("JSON merge error (",70,b4,36,a6) + id) + HX_("): couldn't parse base text! : ",1d,bc,ce,fd)) + ::Std_obj::string(msg)),null());
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 657)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 659)			merge = this->parse(mergeText);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 661)				{
HXLINE( 661)					null();
            				}
HXDLIN( 661)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 663)				::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),(((HX_("JSON merge error (",70,b4,36,a6) + id) + HX_("): couldn't parse merge text! : ",9e,b5,85,90)) + ::Std_obj::string(msg)),null());
HXLINE( 664)				return baseText;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 667)		if (::Reflect_obj::hasField(merge,HX_("merge",b8,a2,c6,05))) {
HXLINE( 669)			if (::Std_obj::isOfType( ::Dynamic(merge->__Field(HX_("merge",b8,a2,c6,05),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE( 671)				::Array< ::Dynamic> merge1 = ( (::Array< ::Dynamic>)(merge->__Field(HX_("merge",b8,a2,c6,05),::hx::paccDynamic)) );
HXLINE( 672)				{
HXLINE( 672)					int _g = 0;
HXDLIN( 672)					while((_g < merge1->length)){
HXLINE( 672)						 ::Dynamic entry = merge1->__get(_g);
HXDLIN( 672)						_g = (_g + 1);
HXLINE( 674)						::String target = null();
HXLINE( 675)						 ::Dynamic payload = null();
HXLINE( 677)						target = ( (::String)(entry->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) );
HXLINE( 678)						payload =  ::Dynamic(entry->__Field(HX_("payload",8e,bf,35,ed),::hx::paccDynamic));
HXLINE( 679)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 680)							base = this->_mergeJson(base,entry,id);
            						} catch( ::Dynamic _hx_e) {
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic _g = _hx_e;
HXLINE( 681)								{
HXLINE( 681)									null();
            								}
HXDLIN( 681)								 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 682)								{
HXLINE( 682)									 ::Dynamic replacer = null();
HXDLIN( 682)									::String space = null();
HXDLIN( 682)									::String _hx_tmp = ((((HX_("JSON merge error (",70,b4,36,a6) + id) + HX_("): could not merge payload \"",0d,a9,75,a2)) + ::haxe::format::JsonPrinter_obj::print(payload,replacer,space)) + HX_("\" into target : ",d3,66,33,03));
HXDLIN( 682)									::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),(_hx_tmp + ::Std_obj::string(msg)),null());
            								}
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 688)				::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),((HX_("JSON merge error (",70,b4,36,a6) + id) + HX_("): merge file must contain a single top-level array named \"merge\"! (Found an object, not an array)",d0,b3,3e,3a)),null());
            			}
            		}
            		else {
HXLINE( 694)			::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),((HX_("JSON merge error (",70,b4,36,a6) + id) + HX_("): merge file must contain a single top-level array named \"merge\"!",5a,b2,79,79)),null());
            		}
HXLINE( 696)		return this->print(base);
            	}


HX_DEFINE_DYNAMIC_FUNC3(JSONParseFormat_obj,merge,return )

 ::Dynamic JSONParseFormat_obj::_mergeJson( ::Dynamic base, ::Dynamic entry,::String id){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_700__mergeJson)
HXLINE( 701)		::Array< ::Dynamic> sig = this->_getTargetSignature(( (::String)(entry->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) ));
HXLINE( 702)		 ::Dynamic obj = base;
HXLINE( 703)		 ::Dynamic currTarget = sig->__get(0);
HXLINE( 704)		if (::hx::IsNull( currTarget )) {
HXLINE( 706)			::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),(((HX_("JSON merge failed (",65,8c,1e,e4) + id) + HX_("), sig was ",23,fe,16,b9)) + ::Std_obj::string(sig)),null());
HXLINE( 707)			return obj;
            		}
HXLINE( 710)		bool done = false;
HXLINE( 711)		 ::Dynamic last = obj;
HXLINE( 712)		int i = 0;
HXLINE( 713)		::String signatureSoFar = HX_("",00,00,00,00);
HXLINE( 714)		 ::Dynamic _hx_struct =  ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("target",51,f3,ec,86),null())
            			->setFixed(1,HX_("parent",2a,05,7e,ed),null())
            			->setFixed(2,HX_("arrIndex",f1,4c,9d,16),-1)
            			->setFixed(3,HX_("next",f3,84,02,49),null()));
HXLINE( 726)		 ::Dynamic next = null();
HXLINE( 727)		while(!(done)){
HXLINE( 729)			_hx_struct = this->_descend(last,currTarget,signatureSoFar,_hx_struct);
HXLINE( 730)			if (::hx::IsNull( _hx_struct )) {
HXLINE( 732)				next = null();
            			}
            			else {
HXLINE( 736)				next =  ::Dynamic(_hx_struct->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic));
            			}
HXLINE( 739)			if ((signatureSoFar != HX_("",00,00,00,00))) {
HXLINE( 740)				signatureSoFar = (signatureSoFar + HX_(".",2e,00,00,00));
            			}
HXLINE( 741)			signatureSoFar = (signatureSoFar + this->_targSigElementToString(currTarget));
HXLINE( 742)			i = (i + 1);
HXLINE( 744)			if (::hx::IsNull( next )) {
HXLINE( 746)				::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),((((HX_("JSON merge failed (",65,8c,1e,e4) + id) + HX_("), could not find object \"",5f,55,9e,7d)) + signatureSoFar) + HX_("\")",c7,1d,00,00)),null());
HXLINE( 747)				done = true;
            			}
            			else {
HXLINE( 751)				if ((i < sig->length)) {
HXLINE( 753)					currTarget = sig->__get(i);
            				}
            				else {
HXLINE( 757)					this->_inject( ::Dynamic(_hx_struct->__Field(HX_("parent",2a,05,7e,ed),::hx::paccDynamic)),( (::String)(_hx_struct->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) ),( (int)(_hx_struct->__Field(HX_("arrIndex",f1,4c,9d,16),::hx::paccDynamic)) ), ::Dynamic(entry->__Field(HX_("payload",8e,bf,35,ed),::hx::paccDynamic)),signatureSoFar);
HXLINE( 758)					done = true;
            				}
            			}
HXLINE( 761)			last = next;
            		}
HXLINE( 763)		return obj;
            	}


HX_DEFINE_DYNAMIC_FUNC3(JSONParseFormat_obj,_mergeJson,return )

::String JSONParseFormat_obj::_targSigElementToString( ::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_767__targSigElementToString)
HXLINE( 768)		::String str = ( (::String)(target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
HXLINE( 769)		bool _hx_tmp;
HXDLIN( 769)		if (::hx::IsNotNull( target->__Field(HX_("arrayIndeces",12,fc,0e,92),::hx::paccDynamic) )) {
HXLINE( 769)			_hx_tmp = (( (::Array< int >)(target->__Field(HX_("arrayIndeces",12,fc,0e,92),::hx::paccDynamic)) )->length > 0);
            		}
            		else {
HXLINE( 769)			_hx_tmp = false;
            		}
HXDLIN( 769)		if (_hx_tmp) {
HXLINE( 771)			int _g = 0;
HXDLIN( 771)			::Array< int > _g1 = ( (::Array< int >)(target->__Field(HX_("arrayIndeces",12,fc,0e,92),::hx::paccDynamic)) );
HXDLIN( 771)			while((_g < _g1->length)){
HXLINE( 771)				int arri = _g1->__get(_g);
HXDLIN( 771)				_g = (_g + 1);
HXLINE( 773)				if ((arri >= 0)) {
HXLINE( 775)					str = (str + ((HX_("[",5b,00,00,00) + arri) + HX_("]",5d,00,00,00)));
            				}
            			}
            		}
HXLINE( 779)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,_targSigElementToString,return )

void JSONParseFormat_obj::_inject( ::Dynamic obj,::String target,int arrIndex, ::Dynamic payload,::String __o_signatureSoFar){
            		::String signatureSoFar = __o_signatureSoFar;
            		if (::hx::IsNull(__o_signatureSoFar)) signatureSoFar = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_784__inject)
HXDLIN( 784)		if ((arrIndex == -1)) {
HXLINE( 786)			if (::Reflect_obj::hasField(obj,target)) {
HXLINE( 788)				 ::Dynamic baseObject = ::Reflect_obj::field(obj,target);
HXLINE( 789)				 ::Dynamic mergedValue = this->_mergeObjects(baseObject,payload,signatureSoFar);
HXLINE( 790)				::Reflect_obj::setField(obj,target,mergedValue);
            			}
            			else {
HXLINE( 794)				::Reflect_obj::setField(obj,target,payload);
            			}
            		}
            		else {
HXLINE( 799)			if (::Std_obj::isOfType(obj,::hx::ArrayBase::__mClass)) {
HXLINE( 801)				::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(obj) );
HXLINE( 802)				if ((arr->get_length() > arrIndex)) {
HXLINE( 804)					 ::Dynamic baseObject = arr->__get(arrIndex);
HXLINE( 805)					 ::Dynamic mergedValue = this->_mergeObjects(baseObject,payload,signatureSoFar);
            				}
            				else {
HXLINE( 809)					::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),(((((HX_("JSON merge failed, array index (",a2,4c,16,8f) + arrIndex) + HX_(") out of bounds for array of length (",6e,14,f7,6a)) + arr->get_length()) + HX_(") at ",56,9c,de,b0)) + signatureSoFar),null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(JSONParseFormat_obj,_inject,(void))

 ::Dynamic JSONParseFormat_obj::_mergeObjects( ::Dynamic a, ::Dynamic b,::String __o_signatureSoFar){
            		::String signatureSoFar = __o_signatureSoFar;
            		if (::hx::IsNull(__o_signatureSoFar)) signatureSoFar = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_822__mergeObjects)
HXLINE( 823)		bool _hx_tmp;
HXDLIN( 823)		if (::Std_obj::isOfType(a,::hx::ArrayBase::__mClass)) {
HXLINE( 823)			_hx_tmp = ::Std_obj::isOfType(b,::hx::ArrayBase::__mClass);
            		}
            		else {
HXLINE( 823)			_hx_tmp = false;
            		}
HXDLIN( 823)		if (_hx_tmp) {
HXLINE( 826)			return b;
            		}
            		else {
HXLINE( 828)			bool _hx_tmp;
HXDLIN( 828)			if (!(::Std_obj::isOfType(a,::hx::ArrayBase::__mClass))) {
HXLINE( 828)				_hx_tmp = !(::Std_obj::isOfType(b,::hx::ArrayBase::__mClass));
            			}
            			else {
HXLINE( 828)				_hx_tmp = false;
            			}
HXDLIN( 828)			if (_hx_tmp) {
HXLINE( 830)				bool aPrimitive = this->isPrimitive(a);
HXLINE( 831)				bool bPrimitive = this->isPrimitive(b);
HXLINE( 832)				bool _hx_tmp;
HXDLIN( 832)				if (aPrimitive) {
HXLINE( 832)					_hx_tmp = bPrimitive;
            				}
            				else {
HXLINE( 832)					_hx_tmp = false;
            				}
HXDLIN( 832)				if (_hx_tmp) {
HXLINE( 835)					return b;
            				}
            				else {
HXLINE( 837)					if ((aPrimitive != bPrimitive)) {
HXLINE( 840)						return a;
            					}
            					else {
HXLINE( 845)						int _g = 0;
HXDLIN( 845)						::Array< ::String > _g1 = ::Reflect_obj::fields(b);
HXDLIN( 845)						while((_g < _g1->length)){
HXLINE( 845)							::String field = _g1->__get(_g);
HXDLIN( 845)							_g = (_g + 1);
HXLINE( 847)							if (::Reflect_obj::hasField(a,field)) {
HXLINE( 850)								 ::Dynamic aValue = ::Reflect_obj::field(a,field);
HXLINE( 851)								 ::Dynamic bValue = ::Reflect_obj::field(b,field);
HXLINE( 852)								 ::Dynamic mergedValue = this->copyVal(this->_mergeObjects(aValue,bValue,((signatureSoFar + HX_(".",2e,00,00,00)) + field)));
HXLINE( 853)								::Reflect_obj::setField(a,field,mergedValue);
            							}
            							else {
HXLINE( 858)								::Reflect_obj::setField(a,field,::Reflect_obj::field(b,field));
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 866)				::String aArr;
HXDLIN( 866)				if (::Std_obj::isOfType(a,::hx::ArrayBase::__mClass)) {
HXLINE( 866)					aArr = HX_("array",99,6d,8f,25);
            				}
            				else {
HXLINE( 866)					aArr = HX_("object",bf,7e,3f,15);
            				}
HXLINE( 867)				::String bArr;
HXDLIN( 867)				if (::Std_obj::isOfType(b,::hx::ArrayBase::__mClass)) {
HXLINE( 867)					bArr = HX_("array",99,6d,8f,25);
            				}
            				else {
HXLINE( 867)					bArr = HX_("object",bf,7e,3f,15);
            				}
HXLINE( 868)				::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),((((((HX_("JSON can't merge @ (",85,71,3f,d3) + signatureSoFar) + HX_(") because base is (",50,8e,37,ae)) + aArr) + HX_(") but payload is (",5a,2e,59,4c)) + bArr) + HX_(")",29,00,00,00)),null());
            			}
            		}
HXLINE( 870)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC3(JSONParseFormat_obj,_mergeObjects,return )

 ::Dynamic JSONParseFormat_obj::copyVal( ::Dynamic a){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_874_copyVal)
HXLINE( 875)		 ::Dynamic b = null();
HXLINE( 876)		if (::Std_obj::isOfType(a,::hx::ClassOf< int >())) {
HXLINE( 877)			b = ::Std_obj::_hx_int(( (Float)(a) ));
            		}
HXLINE( 878)		if (::Std_obj::isOfType(a,::hx::ClassOf< ::Float >())) {
HXLINE( 879)			b = ::hx::TCast< Float >::cast(a);
            		}
HXLINE( 880)		if (::Std_obj::isOfType(a,::hx::ClassOf< ::String >())) {
HXLINE( 881)			b = ::Std_obj::string(b);
            		}
HXLINE( 882)		if (::Std_obj::isOfType(a,::hx::ClassOf< bool >())) {
HXLINE( 883)			b = ::hx::IsEq( a,true );
            		}
            		else {
HXLINE( 885)			b = ::Std_obj::string(a);
            		}
HXLINE( 886)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,copyVal,return )

bool JSONParseFormat_obj::isPrimitive( ::Dynamic a){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_890_isPrimitive)
HXLINE( 891)		if (::Std_obj::isOfType(a,::hx::ClassOf< ::String >())) {
HXLINE( 892)			return true;
            		}
HXLINE( 893)		if (::Std_obj::isOfType(a,::hx::ClassOf< ::Float >())) {
HXLINE( 894)			return true;
            		}
HXLINE( 895)		if (::Std_obj::isOfType(a,::hx::ClassOf< int >())) {
HXLINE( 896)			return true;
            		}
HXLINE( 897)		if (::Std_obj::isOfType(a,::hx::ClassOf< bool >())) {
HXLINE( 898)			return true;
            		}
HXLINE( 899)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,isPrimitive,return )

 ::Dynamic JSONParseFormat_obj::_descend( ::Dynamic obj, ::Dynamic target,::String __o_signatureSoFar, ::Dynamic _hx_struct){
            		::String signatureSoFar = __o_signatureSoFar;
            		if (::hx::IsNull(__o_signatureSoFar)) signatureSoFar = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_915__descend)
HXLINE( 916)		if (::hx::IsNull( _hx_struct )) {
HXLINE( 918)			_hx_struct =  ::Dynamic(::hx::Anon_obj::Create(4)
            				->setFixed(0,HX_("target",51,f3,ec,86),null())
            				->setFixed(1,HX_("parent",2a,05,7e,ed),null())
            				->setFixed(2,HX_("arrIndex",f1,4c,9d,16),-1)
            				->setFixed(3,HX_("next",f3,84,02,49),null()));
            		}
HXLINE( 925)		if (::hx::IsNull( obj )) {
HXLINE( 926)			return null();
            		}
HXLINE( 927)		if (::hx::IsNull( target )) {
HXLINE( 928)			return null();
            		}
HXLINE( 930)		if ((::Reflect_obj::hasField(obj,( (::String)(target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) )) == false)) {
HXLINE( 932)			::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),( (::String)(((((HX_("JSON merge error : object (",e5,d3,7c,c6) + signatureSoFar) + HX_(") has no field (",80,c1,77,e8)) + target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) + HX_(")",29,00,00,00))) ),null());
HXLINE( 933)			return null();
            		}
HXLINE( 935)		 ::Dynamic next = ::Reflect_obj::field(obj,( (::String)(target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) ));
HXLINE( 937)		_hx_struct->__SetField(HX_("next",f3,84,02,49),next,::hx::paccDynamic);
HXLINE( 938)		_hx_struct->__SetField(HX_("parent",2a,05,7e,ed),obj,::hx::paccDynamic);
HXLINE( 939)		_hx_struct->__SetField(HX_("target",51,f3,ec,86),target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),::hx::paccDynamic);
HXLINE( 941)		if (::hx::IsNull( next )) {
HXLINE( 943)			return _hx_struct;
            		}
HXLINE( 945)		if ((( (::Array< int >)(target->__Field(HX_("arrayIndeces",12,fc,0e,92),::hx::paccDynamic)) )->length > 0)) {
HXLINE( 947)			_hx_struct->__SetField(HX_("next",f3,84,02,49),next,::hx::paccDynamic);
HXLINE( 948)			if (::Std_obj::isOfType(next,::hx::ArrayBase::__mClass)) {
HXLINE( 950)				::cpp::VirtualArray arr = ( (::cpp::VirtualArray)(next) );
HXLINE( 951)				::Array< int > arrIndeces = ( (::Array< int >)(target->__Field(HX_("arrayIndeces",12,fc,0e,92),::hx::paccDynamic)) )->copy();
HXLINE( 952)				bool done = false;
HXLINE( 953)				signatureSoFar = ( (::String)((signatureSoFar + (HX_(".",2e,00,00,00) + target->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)))) );
HXLINE( 954)				while((arrIndeces->length > 0)){
HXLINE( 956)					 ::Dynamic arrIndex = arrIndeces->shift();
HXLINE( 957)					if (::hx::IsLess( arrIndex,arr->get_length() )) {
HXLINE( 959)						_hx_struct->__SetField(HX_("parent",2a,05,7e,ed),next,::hx::paccDynamic);
HXLINE( 960)						next = arr->__get(( (int)(arrIndex) ));
HXLINE( 961)						_hx_struct->__SetField(HX_("next",f3,84,02,49),next,::hx::paccDynamic);
HXLINE( 962)						_hx_struct->__SetField(HX_("arrIndex",f1,4c,9d,16),arrIndex,::hx::paccDynamic);
HXLINE( 963)						if (::Std_obj::isOfType(next,::hx::ArrayBase::__mClass)) {
HXLINE( 965)							arr = ( (::cpp::VirtualArray)(next) );
            						}
            						else {
HXLINE( 969)							::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),((((HX_("JSON merge error : invalid array access [",2d,d9,47,04) + arrIndex) + HX_("] on target \"",71,b4,05,40)) + signatureSoFar) + HX_("\"",22,00,00,00)),null());
HXLINE( 970)							done = true;
            						}
            					}
            					else {
HXLINE( 975)						::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),(((((HX_("JSON merge error : array index (",f5,d1,14,72) + arrIndex) + HX_(") out of bounds on target \"",29,e2,45,b0)) + signatureSoFar) + HX_("\" with length ",1e,a7,04,80)) + arr->get_length()),null());
HXLINE( 982)						done = true;
            					}
HXLINE( 984)					signatureSoFar = (signatureSoFar + ((HX_("[",5b,00,00,00) + arrIndex) + HX_("]",5d,00,00,00)));
            				}
            			}
            			else {
HXLINE( 989)				return null();
            			}
            		}
HXLINE( 992)		return _hx_struct;
            	}


HX_DEFINE_DYNAMIC_FUNC4(JSONParseFormat_obj,_descend,return )

::Array< ::Dynamic> JSONParseFormat_obj::_getTargetSignature(::String str){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_996__getTargetSignature)
HXLINE( 997)		if (::hx::IsNull( str )) {
HXLINE( 998)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 999)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1000)		::Array< ::String > arr = str.split(HX_(".",2e,00,00,00));
HXLINE(1001)		{
HXLINE(1001)			int _g = 0;
HXDLIN(1001)			while((_g < arr->length)){
HXLINE(1001)				::String bit = arr->__get(_g);
HXDLIN(1001)				_g = (_g + 1);
HXLINE(1003)				if ((bit.indexOf(HX_("[",5b,00,00,00),null()) != -1)) {
HXLINE(1005)					::Array< ::String > arr2 = bit.split(HX_("[",5b,00,00,00));
HXLINE(1006)					::String value = ( (::String)(arr2->shift()) );
HXLINE(1007)					::Array< ::Dynamic> arrayIndeces = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(1008)					while((arr2->length > 0)){
HXLINE(1010)						::String value2 = ( (::String)(arr2->shift()) );
HXLINE(1011)						value2 = ::polymod::util::Util_obj::uTrimFinalCharIf(value2,HX_("]",5d,00,00,00));
HXLINE(1012)						 ::Dynamic arrIndex = ::Std_obj::parseInt(value2);
HXLINE(1013)						bool _hx_tmp;
HXDLIN(1013)						if (::hx::IsNotNull( arrIndex )) {
HXLINE(1013)							_hx_tmp = ::hx::IsGreaterEq( arrIndex,0 );
            						}
            						else {
HXLINE(1013)							_hx_tmp = false;
            						}
HXDLIN(1013)						if (_hx_tmp) {
HXLINE(1015)							arrayIndeces->push(arrIndex);
            						}
            						else {
HXLINE(1019)							::polymod::Polymod_obj::warning(HX_("merge_error",c1,8f,ea,85),((((HX_("JSON merge error: found invalid array index (",7e,22,f3,0f) + value2) + HX_(") in signature (",5c,ce,b9,91)) + str) + HX_(")",29,00,00,00)),null());
HXLINE(1020)							goto _hx_goto_17;
            						}
            					}
            					_hx_goto_17:;
HXLINE(1023)					result->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("arrayIndeces",12,fc,0e,92),arrayIndeces)
            						->setFixed(1,HX_("value",71,7f,b8,31),value)));
            				}
            				else {
HXLINE(1027)					result->push( ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("arrayIndeces",12,fc,0e,92),::Array_obj< ::Dynamic>::__new(0))
            						->setFixed(1,HX_("value",71,7f,b8,31),bit)));
            				}
            			}
            		}
HXLINE(1030)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,_getTargetSignature,return )

::String JSONParseFormat_obj::print( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_8feeea0724e4c481_1035_print)
HXDLIN(1035)		return ::haxe::format::JsonPrinter_obj::print(data,this->replacer,this->space);
            	}


HX_DEFINE_DYNAMIC_FUNC1(JSONParseFormat_obj,print,return )


::hx::ObjectPtr< JSONParseFormat_obj > JSONParseFormat_obj::__new(::String space, ::Dynamic replacer) {
	::hx::ObjectPtr< JSONParseFormat_obj > __this = new JSONParseFormat_obj();
	__this->__construct(space,replacer);
	return __this;
}

::hx::ObjectPtr< JSONParseFormat_obj > JSONParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx,::String space, ::Dynamic replacer) {
	JSONParseFormat_obj *__this = (JSONParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JSONParseFormat_obj), true, "polymod.format.JSONParseFormat"));
	*(void **)__this = JSONParseFormat_obj::_hx_vtable;
	__this->__construct(space,replacer);
	return __this;
}

JSONParseFormat_obj::JSONParseFormat_obj()
{
}

void JSONParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JSONParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(replacer,"replacer");
	HX_MARK_END_CLASS();
}

void JSONParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(replacer,"replacer");
}

::hx::Val JSONParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return ::hx::Val( space ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inject") ) { return ::hx::Val( _inject_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyVal") ) { return ::hx::Val( copyVal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { return ::hx::Val( replacer ); }
		if (HX_FIELD_EQ(inName,"_descend") ) { return ::hx::Val( _descend_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mergeJson") ) { return ::hx::Val( _mergeJson_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isPrimitive") ) { return ::hx::Val( isPrimitive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mergeObjects") ) { return ::hx::Val( _mergeObjects_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_getTargetSignature") ) { return ::hx::Val( _getTargetSignature_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_targSigElementToString") ) { return ::hx::Val( _targSigElementToString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JSONParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { replacer=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JSONParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("space",c6,8c,66,81));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JSONParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(JSONParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsString,(int)offsetof(JSONParseFormat_obj,space),HX_("space",c6,8c,66,81)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JSONParseFormat_obj,replacer),HX_("replacer",be,e5,16,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JSONParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String JSONParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("space",c6,8c,66,81),
	HX_("replacer",be,e5,16,18),
	HX_("parse",33,90,55,bd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	HX_("_mergeJson",c1,48,5e,c9),
	HX_("_targSigElementToString",18,fe,c8,b5),
	HX_("_inject",30,5c,61,06),
	HX_("_mergeObjects",db,c7,82,19),
	HX_("copyVal",2c,5a,87,43),
	HX_("isPrimitive",5d,3f,d9,05),
	HX_("_descend",ab,07,f8,52),
	HX_("_getTargetSignature",90,41,cb,0c),
	HX_("print",2d,58,8b,c8),
	::String(null()) };

::hx::Class JSONParseFormat_obj::__mClass;

void JSONParseFormat_obj::__register()
{
	JSONParseFormat_obj _hx_dummy;
	JSONParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.JSONParseFormat",c3,fc,67,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JSONParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JSONParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JSONParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JSONParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
