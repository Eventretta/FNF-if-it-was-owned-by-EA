#ifndef INCLUDED_ChartingState
#define INCLUDED_ChartingState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(ChartingState)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)



class HXCPP_CLASS_ATTRIBUTES ChartingState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef ChartingState_obj OBJ_;
		ChartingState_obj();

	public:
		enum { _hx_ClassId = 0x7824f5cd };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ChartingState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ChartingState"); }
		static ::hx::ObjectPtr< ChartingState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< ChartingState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChartingState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChartingState",8d,e0,dd,9b); }

		static void __boot();
		static int lastSection;
		 ::openfl::net::FileReference _file;
		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		int curSection;
		 ::flixel::text::FlxText bpmTxt;
		 ::flixel::FlxSprite strumLine;
		::String curSong;
		int amountSteps;
		 ::flixel::group::FlxTypedGroup bullshitUI;
		 ::flixel::text::FlxText writingNotesText;
		 ::flixel::FlxSprite highlight;
		int GRID_SIZE;
		 ::flixel::FlxSprite dummyArrow;
		 ::flixel::group::FlxTypedGroup curRenderedNotes;
		 ::flixel::group::FlxTypedGroup curRenderedSustains;
		 ::flixel::FlxSprite gridBG;
		 ::Dynamic _song;
		 ::flixel::addons::ui::FlxInputText typingShit;
		::cpp::VirtualArray curSelectedNote;
		int tempBpm;
		 ::flixel::FlxSprite gridBlackLine;
		 ::flixel::_hx_system::FlxSound vocals;
		 ::HealthIcon leftIcon;
		 ::HealthIcon rightIcon;
		 ::Note lastNote;
		void create();

		void addSongUI();
		::Dynamic addSongUI_dyn();

		 ::flixel::addons::ui::FlxUINumericStepper stepperLength;
		 ::flixel::addons::ui::FlxUICheckBox check_mustHitSection;
		 ::flixel::addons::ui::FlxUICheckBox check_changeBPM;
		 ::flixel::addons::ui::FlxUINumericStepper stepperSectionBPM;
		 ::flixel::addons::ui::FlxUICheckBox check_altAnim;
		void addSectionUI();
		::Dynamic addSectionUI_dyn();

		 ::flixel::addons::ui::FlxUINumericStepper stepperSusLength;
		 ::flixel::addons::ui::FlxUI tab_group_note;
		void addNoteUI();
		::Dynamic addNoteUI_dyn();

		void loadSong(::String daSong);
		::Dynamic loadSong_dyn();

		void generateUI();
		::Dynamic generateUI_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		bool updatedSection;
		Float sectionStartTime();
		::Dynamic sectionStartTime_dyn();

		bool writingNotes;
		void update(Float elapsed);

		void changeNoteSustain(Float value);
		::Dynamic changeNoteSustain_dyn();

		int recalculateSteps();
		::Dynamic recalculateSteps_dyn();

		void resetSection(::hx::Null< bool >  songBeginning);
		::Dynamic resetSection_dyn();

		void changeSection(::hx::Null< int >  sec, ::Dynamic updateMusic);
		::Dynamic changeSection_dyn();

		void copySection( ::Dynamic sectionNum);
		::Dynamic copySection_dyn();

		void updateSectionUI();
		::Dynamic updateSectionUI_dyn();

		void updateHeads();
		::Dynamic updateHeads_dyn();

		void updateNoteUI();
		::Dynamic updateNoteUI_dyn();

		void updateGrid();
		::Dynamic updateGrid_dyn();

		void addSection(::hx::Null< int >  lengthInSteps);
		::Dynamic addSection_dyn();

		void selectNote( ::Note note);
		::Dynamic selectNote_dyn();

		void deleteNote( ::Note note);
		::Dynamic deleteNote_dyn();

		void clearSection();
		::Dynamic clearSection_dyn();

		void clearSong();
		::Dynamic clearSong_dyn();

		void addNote( ::Note n);
		::Dynamic addNote_dyn();

		Float getStrumTime(Float yPos);
		::Dynamic getStrumTime_dyn();

		Float getYfromStrum(Float strumTime);
		::Dynamic getYfromStrum_dyn();

		Float daSpacing;
		void loadLevel();
		::Dynamic loadLevel_dyn();

		::cpp::VirtualArray getNotes();
		::Dynamic getNotes_dyn();

		void loadJson(::String song);
		::Dynamic loadJson_dyn();

		void loadAutosave();
		::Dynamic loadAutosave_dyn();

		void autosaveSong();
		::Dynamic autosaveSong_dyn();

		void saveLevel();
		::Dynamic saveLevel_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

};


#endif /* INCLUDED_ChartingState */ 
