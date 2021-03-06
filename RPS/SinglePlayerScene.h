//
//  SinglePlayerScene.h
//  RPS
//
//  Created by Martin Goffan on 8/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

@interface SinglePlayerScene : CCScene <CCTargetedTouchDelegate> {
    CCLayer *bgLayer;
    CCLayer *gameLayer;
    
    CCSprite *puck[2];
    
    CCSprite *ball;
}
// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
@end
