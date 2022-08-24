package;

import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.ui.FlxButton;

class EAPayBox
{
    public var sprites:Array<FlxObject> = [];

    // X, Y, Instance of a state we need, Asking for what?, Cost of accepting?, Cost of declining?  (i want to keep the meme as clean as possible so here goes 3 hours lol)
    public function new(genX:Int,genY:Int,instance:MusicBeatState,message:String = 'test',costAccept:Int,costDecline:Int,?acceptCallback:Void->Void,?declineCallback:Void->Void) 
    {
        var box:FlxSprite = new FlxSprite(genX,genY);
        box.loadGraphic(Paths.image('eaStuff/box','shared'));
        box.scrollFactor.set();
        sprites.push(box);
        instance.add(box);

        var text:FlxText = new FlxText(genX + 10, genY + 100,message);
        text.scrollFactor.set();
        sprites.push(text);
        instance.add(text);

        var button:FlxButton = new FlxButton(genX + 50, genY + 600, '$' + costDecline, function () {
            for (i in sprites)
                {
                    instance.remove(i);
                }
                if (declineCallback != null)
                {
                    declineCallback();
                }
        });
        button.scrollFactor.set();
        sprites.push(button);
        instance.add(button);

        var button:FlxButton = new FlxButton(genX + 200, genY + 600, '$' + costAccept, function () {
            for (i in sprites)
            {
                instance.remove(i);
            }
            if (acceptCallback != null)
            {
                acceptCallback();
            }
        });
        button.scrollFactor.set();
        sprites.push(button);
        instance.add(button);

        FlxG.mouse.visible = true;
        instance.persistentUpdate = false;
    }
}