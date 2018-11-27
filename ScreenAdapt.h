//
//  ScreenAdapt.h
//  Youqun
//
//  Created by mac on 16/2/18.
//  Copyright © 2016年 W_C__L. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScreenAdapt : NSObject

@property(nonatomic,assign)CGFloat scaleWidth;
@property(nonatomic,assign)CGFloat scaleHeight;
-(void)adapt;
-(CGSize)adaptWithSize:(CGSize)size;

@end
