#ifndef GHOST_LISTS_H#define GHOST_LISTS_H
#include "list.h"
/*@predicate ghost_list<t>(int id, list<t> xs);predicate ghost_list_member_handle<t>(int id, t x);
lemma int create_ghost_list<t>();
    requires true;
    ensures ghost_list<t>(result, nil);
lemma void ghost_list_member_handle_lemma<t>();    requires ghost_list<t>(?id, ?xs) &*& ghost_list_member_handle<t>(id, ?x);    ensures ghost_list<t>(id, xs) &*& ghost_list_member_handle<t>(id, x) &*& mem(x, xs) == true;lemma void ghost_list_insert<t>(int id, list<t> xs0, list<t> xs1, t x);    requires ghost_list<t>(id, append(xs0, xs1));    ensures ghost_list<t>(id, append(xs0, cons(x, xs1))) &*& ghost_list_member_handle<t>(id, x);lemma void ghost_list_remove<t>(int id, list<t> xs0, list<t> xs1, t x);    requires ghost_list<t>(id, append(xs0, cons(x, xs1))) &*& ghost_list_member_handle<t>(id, x);    ensures ghost_list<t>(id, append(xs0, xs1));@*/#endif