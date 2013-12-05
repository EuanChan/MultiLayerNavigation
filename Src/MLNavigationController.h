//
//  MLNavigationController.h
//  MultiLayerNavigation
//
//  Created by Feather Chan on 13-4-12.
//  Copyright (c) 2013年 Feather Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MLNavigationController : UINavigationController <UIGestureRecognizerDelegate>

// Enable the drag to back interaction, Defalt is YES.
@property (nonatomic,assign) BOOL canDragBack;

// Indicating whether the last back action is dragged by user.
@property (nonatomic,assign) BOOL isDraggedBack;

// Custom the dragging back area as part of screen start from left side.
// default is 1.0f, meaning the full screen can respond dragging start.
@property (nonatomic,assign) CGFloat draggingBackArea;

@end
