// The MIT License (MIT)
//
// Copyright (c) 2015 FPT Software
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "MDBubbleLabel.h"
#import "MDSlider.h"

#define kMDThumbRadius 8
#define kMDThumbDisabledRadius 6
#define kMDThumbForcusedRadius 12

enum ThumbState { Normal, Focused, Disabled };

@interface MDSliderThumbView : UIView

@property(nonatomic) MDBubbleLabel *bubble;
@property(nonatomic) UIView *node;
@property(nonatomic) enum ThumbState state;
@property(nonatomic, weak) MDSlider *slider;
@property(nonatomic) BOOL enableBubble;

- (instancetype)initWithMDSlider:(MDSlider *)slider;
- (void)focused:(void (^)(BOOL finished))completion;
- (void)lostFocused:(void (^)(BOOL finished))completion;
- (void)disabled:(void (^)(BOOL finished))completion;
- (void)changeThumbShape:(BOOL)animated withValue:(float)rawValue;
@end
