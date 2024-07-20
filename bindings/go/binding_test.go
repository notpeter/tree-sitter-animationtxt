package tree_sitter_animationtxt_test

import (
	"testing"

	tree_sitter_animationtxt "github.com/notpeter/tree-sitter-animationtxt"
	tree_sitter "github.com/smacker/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_animationtxt.Language())
	if language == nil {
		t.Errorf("Error loading Animationtxt grammar")
	}
}
