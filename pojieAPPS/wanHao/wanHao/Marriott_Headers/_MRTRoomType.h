//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTManagedObject.h"

@class MRTImageInfo, MRTProperty, MRTRoomTypeID, NSDate, NSString;

@interface _MRTRoomType : MRTManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) MRTRoomTypeID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) MRTImageInfo *primaryImageInfo; // @dynamic primaryImageInfo;
@property(retain, nonatomic) MRTProperty *property; // @dynamic property;
@property(retain, nonatomic) NSString *roomTypeDescription; // @dynamic roomTypeDescription;
@property(retain, nonatomic) id textAttributes; // @dynamic textAttributes;
@property(retain, nonatomic) NSDate *timeCreated; // @dynamic timeCreated;
@property(retain, nonatomic) NSDate *timeUpdated; // @dynamic timeUpdated;

@end

