package tree_sitter_playdateanimation_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-playdateanimation"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_playdateanimation.Language())
	if language == nil {
		t.Errorf("Error loading Playdateanimation grammar")
	}
}
