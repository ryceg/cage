/**
	@file
	rev.c
	
	@name 
	cage.rev
	
	@realname 
	cage.rev

	@type
	abstraction
	
	@module
	cage

	@author
	cageproject
	
	@digest 
	Perform retrogrades
	
	@description
	Perform a timewise reversal of all the content in a <o>bach.roll</o> or <o>bach.score</o>.
 
	@discussion
 
	@category
	cage, cage scores

	@keywords
	retrograde, reverse, roll, score
 
	@seealso
	cage.rot, cage.inv, cage.shift	
	
	@owner
	Daniele Ghisi
*/


// ---------------
// METHODS
// ---------------

// @method llll @digest Reverse score
// @description An <m>llll</m> in the inlet is considered as the score gathered syntax. The reversal
// operation is performed and the reversed score in gathered syntax is output through the outlet.
// The output header content is the same as the input header content.

// @method bang @digest Output reversed score
// @description Outputs result of the last reversal.


// ---------------
// ATTRIBUTES
// ---------------

void main_foo() {

llllobj_class_add_out_attr(c, LLLL_OBJ_VANILLA);

}

// ---------------
// INLETS
// ---------------

// @in 0 @type llll @digest Original score



// ---------------
// OUTLETS
// ---------------

// @out 0 @type llll @digest Reversed score



// ---------------
// ARGUMENTS
// ---------------

// (none)
