// Copyright 2010-2014 RethinkDB, all rights reserved.
#ifndef BTREE_LEAF_NODE_HPP_
#define BTREE_LEAF_NODE_HPP_

#include "btree/old_leaf.hpp"
#include "containers/sized_ptr.hpp"

namespace leaf {

using ::old_leaf::begin;
using ::old_leaf::end;
using ::old_leaf::rbegin;
using ::old_leaf::rend;

using ::old_leaf::inclusive_lower_bound;
using ::old_leaf::inclusive_upper_bound;


void validate(value_sizer_t *sizer, sized_ptr_t<const leaf_node_t> node);

bool is_empty(sized_ptr_t<const leaf_node_t> node);

bool is_full(value_sizer_t *sizer, const leaf_node_t *node,
             const btree_key_t *key, const void *value);

using ::old_leaf::init;
using ::old_leaf::is_underfull;
using ::old_leaf::split;
using ::old_leaf::merge;
using ::old_leaf::level;
using ::old_leaf::is_mergable;
using ::old_leaf::lookup;
using ::old_leaf::insert;
using ::old_leaf::remove;
using ::old_leaf::erase_presence;
using ::old_leaf::dump_entries_since_time;
using ::old_leaf::entry_reception_callback_t;

using ::old_leaf::reverse_iterator;


}  // namespace leaf


#endif  // BTREE_LEAF_NODE_HPP_
