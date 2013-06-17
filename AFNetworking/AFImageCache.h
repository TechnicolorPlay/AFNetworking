//
//  AFImageCache.h
//  NeonEngine
//
//  Created by Andrew Poes on 5/23/13.
//  Copyright (c) 2013 groupneon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AFImageCache : NSCache

+ (AFImageCache *)af_sharedImageCache;
+ (NSOperationQueue *)af_sharedImageRequestOperationQueue;

- (UIImage *)cachedImageForRequest:(NSURLRequest *)request;
- (void)cacheImage:(UIImage *)image
        forRequest:(NSURLRequest *)request;

@end
