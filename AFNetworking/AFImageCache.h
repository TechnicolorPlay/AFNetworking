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
+ (dispatch_queue_t)af_sharedImageRequestDispatchQueue;

- (UIImage *)cachedImageForRequest:(NSURLRequest *)request;
- (void)cacheImage:(UIImage *)image
        forRequest:(NSURLRequest *)request;

@end
