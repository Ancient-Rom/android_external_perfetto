/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * perfetto/common/commit_data_request.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos.py
 */

#include "perfetto/tracing/core/commit_data_request.h"

#include "perfetto/common/commit_data_request.pb.h"

namespace perfetto {

CommitDataRequest::CommitDataRequest() = default;
CommitDataRequest::~CommitDataRequest() = default;
CommitDataRequest::CommitDataRequest(const CommitDataRequest&) = default;
CommitDataRequest& CommitDataRequest::operator=(const CommitDataRequest&) =
    default;
CommitDataRequest::CommitDataRequest(CommitDataRequest&&) noexcept = default;
CommitDataRequest& CommitDataRequest::operator=(CommitDataRequest&&) = default;

void CommitDataRequest::FromProto(
    const perfetto::protos::CommitDataRequest& proto) {
  chunks_to_move_.clear();
  for (const auto& field : proto.chunks_to_move()) {
    chunks_to_move_.emplace_back();
    chunks_to_move_.back().FromProto(field);
  }

  chunks_to_patch_.clear();
  for (const auto& field : proto.chunks_to_patch()) {
    chunks_to_patch_.emplace_back();
    chunks_to_patch_.back().FromProto(field);
  }
  unknown_fields_ = proto.unknown_fields();
}

void CommitDataRequest::ToProto(
    perfetto::protos::CommitDataRequest* proto) const {
  proto->Clear();

  for (const auto& it : chunks_to_move_) {
    auto* entry = proto->add_chunks_to_move();
    it.ToProto(entry);
  }

  for (const auto& it : chunks_to_patch_) {
    auto* entry = proto->add_chunks_to_patch();
    it.ToProto(entry);
  }
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

CommitDataRequest::ChunksToMove::ChunksToMove() = default;
CommitDataRequest::ChunksToMove::~ChunksToMove() = default;
CommitDataRequest::ChunksToMove::ChunksToMove(
    const CommitDataRequest::ChunksToMove&) = default;
CommitDataRequest::ChunksToMove& CommitDataRequest::ChunksToMove::operator=(
    const CommitDataRequest::ChunksToMove&) = default;
CommitDataRequest::ChunksToMove::ChunksToMove(
    CommitDataRequest::ChunksToMove&&) noexcept = default;
CommitDataRequest::ChunksToMove& CommitDataRequest::ChunksToMove::operator=(
    CommitDataRequest::ChunksToMove&&) = default;

void CommitDataRequest::ChunksToMove::FromProto(
    const perfetto::protos::CommitDataRequest_ChunksToMove& proto) {
  static_assert(sizeof(page_) == sizeof(proto.page()), "size mismatch");
  page_ = static_cast<decltype(page_)>(proto.page());

  static_assert(sizeof(chunk_) == sizeof(proto.chunk()), "size mismatch");
  chunk_ = static_cast<decltype(chunk_)>(proto.chunk());

  static_assert(sizeof(target_buffer_) == sizeof(proto.target_buffer()),
                "size mismatch");
  target_buffer_ = static_cast<decltype(target_buffer_)>(proto.target_buffer());
  unknown_fields_ = proto.unknown_fields();
}

void CommitDataRequest::ChunksToMove::ToProto(
    perfetto::protos::CommitDataRequest_ChunksToMove* proto) const {
  proto->Clear();

  static_assert(sizeof(page_) == sizeof(proto->page()), "size mismatch");
  proto->set_page(static_cast<decltype(proto->page())>(page_));

  static_assert(sizeof(chunk_) == sizeof(proto->chunk()), "size mismatch");
  proto->set_chunk(static_cast<decltype(proto->chunk())>(chunk_));

  static_assert(sizeof(target_buffer_) == sizeof(proto->target_buffer()),
                "size mismatch");
  proto->set_target_buffer(
      static_cast<decltype(proto->target_buffer())>(target_buffer_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

CommitDataRequest::ChunkToPatch::ChunkToPatch() = default;
CommitDataRequest::ChunkToPatch::~ChunkToPatch() = default;
CommitDataRequest::ChunkToPatch::ChunkToPatch(
    const CommitDataRequest::ChunkToPatch&) = default;
CommitDataRequest::ChunkToPatch& CommitDataRequest::ChunkToPatch::operator=(
    const CommitDataRequest::ChunkToPatch&) = default;
CommitDataRequest::ChunkToPatch::ChunkToPatch(
    CommitDataRequest::ChunkToPatch&&) noexcept = default;
CommitDataRequest::ChunkToPatch& CommitDataRequest::ChunkToPatch::operator=(
    CommitDataRequest::ChunkToPatch&&) = default;

void CommitDataRequest::ChunkToPatch::FromProto(
    const perfetto::protos::CommitDataRequest_ChunkToPatch& proto) {
  static_assert(sizeof(target_buffer_) == sizeof(proto.target_buffer()),
                "size mismatch");
  target_buffer_ = static_cast<decltype(target_buffer_)>(proto.target_buffer());

  static_assert(sizeof(writer_id_) == sizeof(proto.writer_id()),
                "size mismatch");
  writer_id_ = static_cast<decltype(writer_id_)>(proto.writer_id());

  static_assert(sizeof(chunk_id_) == sizeof(proto.chunk_id()), "size mismatch");
  chunk_id_ = static_cast<decltype(chunk_id_)>(proto.chunk_id());

  patches_.clear();
  for (const auto& field : proto.patches()) {
    patches_.emplace_back();
    patches_.back().FromProto(field);
  }

  static_assert(sizeof(has_more_patches_) == sizeof(proto.has_more_patches()),
                "size mismatch");
  has_more_patches_ =
      static_cast<decltype(has_more_patches_)>(proto.has_more_patches());
  unknown_fields_ = proto.unknown_fields();
}

void CommitDataRequest::ChunkToPatch::ToProto(
    perfetto::protos::CommitDataRequest_ChunkToPatch* proto) const {
  proto->Clear();

  static_assert(sizeof(target_buffer_) == sizeof(proto->target_buffer()),
                "size mismatch");
  proto->set_target_buffer(
      static_cast<decltype(proto->target_buffer())>(target_buffer_));

  static_assert(sizeof(writer_id_) == sizeof(proto->writer_id()),
                "size mismatch");
  proto->set_writer_id(static_cast<decltype(proto->writer_id())>(writer_id_));

  static_assert(sizeof(chunk_id_) == sizeof(proto->chunk_id()),
                "size mismatch");
  proto->set_chunk_id(static_cast<decltype(proto->chunk_id())>(chunk_id_));

  for (const auto& it : patches_) {
    auto* entry = proto->add_patches();
    it.ToProto(entry);
  }

  static_assert(sizeof(has_more_patches_) == sizeof(proto->has_more_patches()),
                "size mismatch");
  proto->set_has_more_patches(
      static_cast<decltype(proto->has_more_patches())>(has_more_patches_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

CommitDataRequest::ChunkToPatch::Patch::Patch() = default;
CommitDataRequest::ChunkToPatch::Patch::~Patch() = default;
CommitDataRequest::ChunkToPatch::Patch::Patch(
    const CommitDataRequest::ChunkToPatch::Patch&) = default;
CommitDataRequest::ChunkToPatch::Patch& CommitDataRequest::ChunkToPatch::Patch::
operator=(const CommitDataRequest::ChunkToPatch::Patch&) = default;
CommitDataRequest::ChunkToPatch::Patch::Patch(
    CommitDataRequest::ChunkToPatch::Patch&&) noexcept = default;
CommitDataRequest::ChunkToPatch::Patch& CommitDataRequest::ChunkToPatch::Patch::
operator=(CommitDataRequest::ChunkToPatch::Patch&&) = default;

void CommitDataRequest::ChunkToPatch::Patch::FromProto(
    const perfetto::protos::CommitDataRequest_ChunkToPatch_Patch& proto) {
  static_assert(sizeof(offset_) == sizeof(proto.offset()), "size mismatch");
  offset_ = static_cast<decltype(offset_)>(proto.offset());

  static_assert(sizeof(data_) == sizeof(proto.data()), "size mismatch");
  data_ = static_cast<decltype(data_)>(proto.data());
  unknown_fields_ = proto.unknown_fields();
}

void CommitDataRequest::ChunkToPatch::Patch::ToProto(
    perfetto::protos::CommitDataRequest_ChunkToPatch_Patch* proto) const {
  proto->Clear();

  static_assert(sizeof(offset_) == sizeof(proto->offset()), "size mismatch");
  proto->set_offset(static_cast<decltype(proto->offset())>(offset_));

  static_assert(sizeof(data_) == sizeof(proto->data()), "size mismatch");
  proto->set_data(static_cast<decltype(proto->data())>(data_));
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

}  // namespace perfetto