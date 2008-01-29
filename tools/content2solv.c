/*
 * Copyright (c) 2007, Novell Inc.
 *
 * This program is licensed under the BSD license, read LICENSE.BSD
 * for further information
 */

#include <sys/types.h>
#include <limits.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pool.h"
#include "repo.h"
#include "repo_content.h"
#include "repo_write.h"

int
main(int argc, char **argv)
{
  Pool *pool = pool_create();
  Repo *repo = repo_create(pool, "<stdin>");
  repo_add_content(repo, stdin);
  repo_write(repo, stdout, 0, 0);
  pool_free(pool);
  return 0;
}
