//
//  Game.h
//  Machismo
//
//  Created by 彩月葵 on 2018/04/09.
//  Copyright © 2018年 彩月葵. All rights reserved.
//

#import "Deck.h"
#import "ChoosingResult.h"

@interface Game : NSObject

extern NSString *const RESULT_TYPE_FLIP_UP;
extern NSString *const RESULT_TYPE_FLIP_DOWN;
extern NSString *const RESULT_TYPE_MATCH;
extern NSString *const RESULT_TYPE_MISMATCH;
extern NSString *const RESULT_TYPE_DISABLE;

+ (NSUInteger)mismatchPanelty;
+ (NSUInteger)matchBonus;
+ (NSUInteger)costToChoose;

// designated initializer
- (instancetype)initWithCardCount:(NSUInteger)count
                        usingDeck:(Deck *)deck
                    choosingCount:(NSUInteger)choosingCount;

@property (nonatomic) NSInteger score;
@property (nonatomic) BOOL started;
@property (strong, nonatomic) NSMutableArray *cards; // of Card

@property (nonatomic) NSUInteger chosenCount;
@property (nonatomic) NSUInteger choosingCount;

- (ChoosingResult *)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;
- (void)setCardChosen:(Card *)card
               chosen:(BOOL)chosen;

@end
