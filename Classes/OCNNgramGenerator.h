//
//  OCNNgram.h
//  Pods
//
//  Created by Daniel Doubrovkine on 2/26/14.
//
//

#import <Foundation/Foundation.h>

@interface OCNNgramGenerator : NSObject

/**
 Returns a dictionary of n-grams and their scores.
 
 @param str String to return n-grams for.
 @param width Width (the number n) of each n-gram.
 **/
- (NSDictionary *)ngramsForString:(NSString *)str withWidth:(NSInteger)width;

/**
 Returns a dictionary of n-grams of size width and their scores.
 If str is smaller than width, str is returned as the n-gram value.
 
 @param str String to return n-grams for.
 @param max Maximum number of n-grams to return.
 @param width Width (the number n) of each n-gram.
 **/
- (NSDictionary *)ngramsForString:(NSString *)str withMax:(NSInteger)max andWidth:(NSInteger)width;

@end
