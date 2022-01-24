//
//  convertGB_BIG.h
//
//  Created by CashLee on 2015-4-14.
//  Copyright 2015 cashlee.info. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChineseConvert : NSObject

@property (nonatomic, strong) NSString *string_GB;
@property (nonatomic, strong) NSString *string_BIG5;
- (NSString *)gbToBig5:(NSString *)srcString;
- (NSString *)big5ToGb:(NSString *)srcString;
@end
