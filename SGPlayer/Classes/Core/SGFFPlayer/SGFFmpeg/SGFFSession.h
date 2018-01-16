//
//  SGFFSession.h
//  SGPlayer
//
//  Created by Single on 2018/1/16.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SGFFSession;

@protocol SGFFSessionDelegate <NSObject>

- (void)session:(SGFFSession *)session didFailed:(NSError *)error;

@end

@interface SGFFSession : NSObject

- (instancetype)initWithContentURL:(NSURL *)contentURL delegate:(id <SGFFSessionDelegate>)delegate;

@property (nonatomic, copy) NSError * error;

- (void)prepare;

@end
