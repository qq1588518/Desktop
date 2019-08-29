//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IMOBFDataModel <NSObject>
+ (id)rawDataWithUnsupportTypeObject:(id)arg1 propertyName:(NSString *)arg2;
+ (id)unsupportTypeWithRawData:(id)arg1 targetType:(Class)arg2 propertyName:(NSString *)arg3;
+ (NSDictionary *)elementTypeOfCollectionPropertyDictionary;
+ (NSDictionary *)propertyMappingDictionary;
- (NSDictionary *)dictionaryValue;
- (id)get:(NSString *)arg1;
- (void)set:(id)arg1 key:(NSString *)arg2;
- (id)initWithDict:(NSDictionary *)arg1;
@end

