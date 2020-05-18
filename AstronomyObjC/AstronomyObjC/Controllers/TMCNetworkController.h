//
//  TMCNetworkController.h
//  AstronomyObjC
//
//  Created by Christopher Devito on 5/18/20.
//  Copyright © 2020 Christopher Devito. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TMCMarsPhotoReference;

typedef void (^TMCMarsPhotoCompletion)(TMCMarsPhotoReference *_Nullable photo, NSError *_Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface TMCNetworkController : NSObject

@property (nonatomic, nullable) NSArray<TMCMarsPhotoReference *> *photos;

- (instancetype)initWithPhotos:(NSMutableArray *)photos;

- (void)fetchMarsPhotosOnSol:(NSNumber *)sol
            completionBlock:(TMCMarsPhotoCompletion)completionBlock;

@end

NS_ASSUME_NONNULL_END
