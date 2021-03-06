//
//  GeneralSettingsRowItem.h
//  Telegram
//
//  Created by keepcoder on 13.10.14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import "TMRowItem.h"

@interface GeneralSettingsRowItem : TMRowItem

typedef enum
{
    SettingsRowItemTypeSwitch,
    SettingsRowItemTypeChoice,
    SettingsRowItemTypeNext,
    SettingsRowItemTypeSelected
} SettingsRowItemType;


@property (nonatomic,assign,readonly) SettingsRowItemType type;
@property (nonatomic,strong,readonly) void (^callback)(GeneralSettingsRowItem *item);

@property (nonatomic,strong,readonly) id (^stateback)(GeneralSettingsRowItem *item);


@property (nonatomic,strong,readonly,getter=description) NSString *desc;
@property (nonatomic,strong) NSString *subdesc;
@property (nonatomic,assign) int height;

@property (nonatomic,assign) BOOL locked;

-(id)initWithType:(SettingsRowItemType)type callback:(void (^)(GeneralSettingsRowItem *item))callback description:(NSString *)description height:(int)height stateback:(id (^)(GeneralSettingsRowItem *item))stateback;

-(id)initWithType:(SettingsRowItemType)type callback:(void (^)(GeneralSettingsRowItem *item))callback description:(NSString *)description subdesc:(NSString *)subdesc height:(int)height stateback:(id (^)(GeneralSettingsRowItem *item))stateback;

@end
