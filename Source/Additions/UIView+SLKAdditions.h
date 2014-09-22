//
//   Copyright 2014 Slack Technologies, Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#import <UIKit/UIKit.h>

/** @name UIView additional features used for SlackTextViewController. */
@interface UIView (SLKAdditions)

// Convenience methods for CGRect calculation
CGRect adjustEndFrame(CGRect endFrame, UIInterfaceOrientation orientation);
BOOL isValidKeyboardFrame(CGRect frame);

/**
 Animates the view's constraints by calling layoutIfNeeded.
 
 @param bounce YES if the animation should use spring damping and velocity to give a bouncy effect to animations.
 @param options A mask of options indicating how you want to perform the animations.
 @param animations An additional block for custom animations.
 */
- (void)animateLayoutIfNeededWithBounce:(BOOL)bounce options:(UIViewAnimationOptions)options animations:(void (^)(void))animations;

/**
 Animates the view's constraints by calling layoutIfNeeded.
 
 @param duration The total duration of the animations, measured in seconds.
 @param bounce YES if the animation should use spring damping and velocity to give a bouncy effect to animations.
 @param options A mask of options indicating how you want to perform the animations.
 @param animations An additional block for custom animations.
 */
- (void)animateLayoutIfNeededWithDuration:(NSTimeInterval)duration bounce:(BOOL)bounce options:(UIViewAnimationOptions)options animations:(void (^)(void))animations;

/**
 Returns the view constraints matching a specific layout attribute (top, bottom, left, right, leading, trailing, etc.)
 
 @param attribute The layout attribute to use for searching.
 @return An array of matching constraints.
 */
- (NSArray *)constraintsForAttribute:(NSLayoutAttribute)attribute;

@end